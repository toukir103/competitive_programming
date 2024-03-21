#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main() {
    optimize();

    string s;
    cin >> s;

    string s2;
    s2 += toupper(s[0]);

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == 's') {
            s2 += '$';
        } else if (s[i] == 'i') {
            s2 += '!';
        } else if (s[i] == 'o') {
            s2 += "()";
        } else {
            s2 += s[i];
        }
    }
    s2+='.';

    cout << s2 << endl;

    return 0;
}