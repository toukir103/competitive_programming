#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int n;
        cin >> n;
        if (n == 0) {
            cout << "0 0" << endl;
        } else {
            int computer1 = n / 2;
            int computer2 = n - computer1;
            cout << computer1 << " " << computer2 << endl;
        }
    }

    return 0;
}
