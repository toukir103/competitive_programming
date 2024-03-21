#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
    optimize();
    float h,m;
    cin>>h>>m;
    float hours=(h+(m/60))*30;
    float minutes=(6*m);
    float angle=abs(hours-minutes);
    float result=(360-angle);
    cout<<fixed<<setprecision(7)<<result<<endl;

    return 0;
}