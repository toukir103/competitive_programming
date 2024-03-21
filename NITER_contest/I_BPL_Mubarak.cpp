#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string outcomes;
        cin >> outcomes;

        int legalBalls = 0;
        int overs = 0;

        for (char outcome : outcomes) {
            if (outcome == 'W' || outcome == 'N' || outcome == 'D') {
                // No ball, wide ball, and dead ball are not counted
                continue;
            } else if (outcome == 'O') {
                // Out, so the ball is not counted, and the over is completed
                overs++;
            } else {
                // Runs scored, increment the count of legal balls
                legalBalls++;
            }
        }

        cout << overs << " OVER" << (overs != 1 ? "S" : "") << " ";
        cout << legalBalls << " BALL" << (legalBalls != 1 ? "S" : "") << endl;
    }

    return 0;
}
