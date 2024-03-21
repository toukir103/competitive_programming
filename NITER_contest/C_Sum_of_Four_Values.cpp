#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    unordered_map<int, pair<int, int>> sumIndices;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int cntnum = arr[i] + arr[j];
            int complement = x - cntnum;
            if (sumIndices.find(complement) != sumIndices.end()) {
                auto indices = sumIndices[complement];
                cout << indices.first + 1 << " " << indices.second + 1 << " " << i + 1 << " " << j + 1 << "\n";
                return 0;
            }
        }
        for (int k = 0; k < i; ++k) {
            sumIndices[arr[i] + arr[k]] = make_pair(k, i);
        }
    }
    cout << "IMPOSSIBLE\n";

    return 0;
}
