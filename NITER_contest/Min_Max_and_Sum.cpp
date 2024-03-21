#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '/n';
int main()
{
    optimize();
    int n;
    cin>>n;
     char ar[n];
    for (int i = 0; i < n; i++)
    {
         cin>>ar[i];
    }

    for (int i = n-1; i >=0; i--)
    {
       for (int j = 0; j < n; j++)
       {
           if (ar[i+1]>ar[i])
           {
              int tmp=ar[i];
              ar[i]=ar[i+1];
              ar[i+1]=tmp;
           }

       }

    }

    for (int i = 0; i <n ; i++)
    {
         cout<<ar[i]<<" ";
    }




    return 0;
}