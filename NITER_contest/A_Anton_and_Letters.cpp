#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin,s);
    int count = 0;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '{' || s[i] == '}' || s[i] == ',' || s[i] == ' ')
        {
            continue;
        }
        else
        {
            count++;

            while (i + 1 < s.size() && s[i] == s[i + 1])
            {
                i++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
