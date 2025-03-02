#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;

        ll a=n/x;
        ll b=n/y;
        ll lcm=(x*y)/__gcd(x,y);
        ll c=n/lcm;
        ll a1=a-c;
        ll b1=b-c;

        cout<<((n*(n+1)/2)-(n-a1)*(n-a1+1)/2)-(b1*(b1+1)/2)<<endl;
    }

    return 0;
}