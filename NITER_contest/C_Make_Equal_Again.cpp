#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> counts;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        counts[a[i]]++;
    }

    int min_burles = n;

    for (auto& [value, count] : counts) {
        int burles = n - count;
        min_burles = min(min_burles, burles);
    }

    cout << min_burles << endl;

    return 0;
}
