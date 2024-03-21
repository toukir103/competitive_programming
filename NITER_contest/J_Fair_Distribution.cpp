#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
 optimize();
   int x,y;
   cin>>x>>y;
   int r=y%x;
   int ans=x-r;
   cout<<ans<<endl;
    return 0;
}