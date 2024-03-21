#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    optimize();
 int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string word;
        for (int i = 2; i >= 0; i--) {
            int max_position = min(n - i, 26);
            word += 'a' + max_position - 1;
            n -= max_position;
        }
      sort(word.begin(), word.end());
        cout << word << endl;
    }
    return 0;
}
