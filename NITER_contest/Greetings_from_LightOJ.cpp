#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
optimize();
int n;
cin>>n;
int i=1;
while (n--)
{
   int num1;
   int num2;
    cin>>num1>>num2;
   int sum=num1+num2;
   cout<<"Case "<<i<<": "<<sum<<endl;
   i++;
}

    return 0;
}