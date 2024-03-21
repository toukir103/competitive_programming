
#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    optimize();
        int num1;
        char c;
        int num2;
    do
    {

        cin>>num1>>c>>num2;
        if (c=='?')
        {
            break;
        }

        if (c=='+')
        {
            int result=num1+num2;
            cout<<result<<endl;
        }
      else  if (c=='-')
        {
            int result=num1-num2;
            cout<<result<<endl;
        }
      else  if (c=='*')
        {
            int result=num1*num2;
            cout<<result<<endl;
        }
      else  if (c=='/')
        {
            int result=num1/num2;
            cout<<result<<endl;
        }

    } while ( c!='?');


    return 0;
}