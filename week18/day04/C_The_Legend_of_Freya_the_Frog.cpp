#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,k;
        cin>>x>>y>>k;

        ll a,b;
        if(x%k==0)
        {
            a=x/k;
        }
        else
        {
            a=(x/k)+1;
        }

        if(y%k==0)
        {
            b=y/k;
        }
        else
        {
            b=(y/k)+1;
        }

        ll ans=2*max(a,b);

        if(a>b)
        {
            ans--;
        }

        cout<<ans<<endl;
    }

    return 0;
}