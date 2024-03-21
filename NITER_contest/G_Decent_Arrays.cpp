// #include <bits/stdc++.h>
// using namespace std;
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl '\n';
// int main()
// {
// optimize();
// int n;
// bool a=false;
// cin>>n;
// int ar[n];

// for (int i = 0; i < n; i++)
// {
//    cin>>ar[i];
// }
// for (int i = 0; i < n-1; i++)
// {
//     if (ar[i]<ar[i+1])
//     {
//         a=true;
//     }
//     else{
//         a=false;
//     }

// }
// if (a==true)
// {
//     cout<<"Yes"<<endl;
// }
// else
// {
//     cout<<"No"<<endl;
// }




//     return 0;
// }
#include <iostream>

int main() {
    // Input
    int N;
    std::cin >> N;

    int prev, current;
    bool ascending = true;

    // Check ascending order
    for (int i = 0; i < N; ++i) {
        std::cin >> current;

        if (i > 0 && current < prev) {
            ascending = false;
            break;
        }

        prev = current;
    }

    // Output
    if (ascending) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
