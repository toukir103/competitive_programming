#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> order(n);
    order[0] = 1;
    for (int i = 1; i < n; ++i)
    {
        order[i] = n - i;
    }
    if (k == 0)
    {
        for (int i : order)
        {
            cout << i << " ";
        }
    }
    else
    {
        for (int i = 0; i < k; ++i)
        {
            swap(order[i], order[i + 1]);
        }

        for (int i : order)
        {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
