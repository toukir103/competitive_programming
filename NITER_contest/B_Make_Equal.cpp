#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> containers(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> containers[i];
            sum += containers[i];
        }

        if (sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        int target = sum / n;
        bool possible = true;
        for (int i = 0; i < n; ++i) {

            int diff = containers[i] - target;

            if (diff > 0) {

                if (i + 1 < n) {
                    containers[i + 1] += diff;
                } else {
                    possible = false;
                    break;
                }
            } else if (diff < 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
