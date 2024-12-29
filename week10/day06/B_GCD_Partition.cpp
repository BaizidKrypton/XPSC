#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll mx_gcd=1;
        ll sum=0;
        cin>>n;

        vector<ll> v(n,0);
        vector<ll> pre(n,0);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        pre[0]=v[0];
        for(int i=1; i<n; i++)
        {
            pre[i]=v[i]+pre[i-1];
        }

        sum=pre[n-1];
        for(int i=0; i<n-1; i++)
        {
            mx_gcd=max(mx_gcd,__gcd(pre[i],sum-pre[i]));
        }

        cout<<mx_gcd<<endl;
    }

    return 0;
}