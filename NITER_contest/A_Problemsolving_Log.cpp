#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string contestLog;
        cin >> contestLog;

        int totalTime = 0;
        int solvedProblems = 0;

        for (int i = 1; i <= n; i++) {
            int timeRequired = (contestLog[i-1] - 'A')+1;
            if (timeRequired <=i) {
                solvedProblems++;
            }

            // totalTime += timeRequired;
        }

        cout << solvedProblems << endl;
    }

    return 0;
}
