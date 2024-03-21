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
    int n, sum;
    cin >> n >> sum;

    map<int, int> mp;
    int a[n + 10];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int cntnum = a[i] + a[j];
            int complement = sum - cntnum;
            if (mp.count(complement) != 0 && i != mp[complement] && j != mp[complement])
            {
                cout << i << " " << j << " " << mp[complement] << endl;
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
