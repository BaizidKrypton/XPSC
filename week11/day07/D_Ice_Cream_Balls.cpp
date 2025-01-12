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
        cin>>n;

        auto ok=[&](ll x)
        {
            ll tmp=(x*(x-1))/2;
            return tmp<=n;
        };

        ll l=2, r=2e9, mid, ans=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }

        
        cout<<ans<<endl;
    }

    return 0;
}