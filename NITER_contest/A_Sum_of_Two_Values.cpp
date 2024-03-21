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
    long long n, sum;
    cin >> n >> sum;

    map<long long, long long> mp;
    long long a[n + 10];

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }

    for (size_t i = 0; i < n; i++)
    {
        if (mp.count(sum - a[i]) && i != mp[sum - a[i]])
        {
            cout << i + 1 << " " << mp[sum - a[i]] + 1 << endl;  
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
