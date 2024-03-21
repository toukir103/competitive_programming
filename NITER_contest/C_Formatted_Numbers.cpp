#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n';
int main()
{
    optimize();
    long long int num;
    cin >> num;
    string s = to_string(num);
    int end = s.length();
    for (int i = 0; i < end; i++)
    {
        cout << s[i];
        if (i < s.length() - 1 && ((s.length() - 1) - i) % 3 == 0)
        {
            cout << ",";
        }
    }

    return 0;
}
