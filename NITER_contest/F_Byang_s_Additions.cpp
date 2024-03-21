#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    optimize();
    int num1,num2;
    cin>>num1>>num2;
    bool result=false;
    int carry=0;
     while (num1 > 0 || num2 > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;
        if (digit1 + digit2 + carry >= 10) {
            result= true;
        }
         else if (digit1 + digit2 + carry < 10)
         {
              result= false;
         }
        carry = (digit1 + digit2 + carry) / 10;
        num1 /= 10;
        num2 /= 10;

    }
    if (result==true)
    {
         cout<<"Yes"<<endl
    }
  else if (result!=true)
  {
    cout<<"No"<<endl;
  }



    return 0;
}
