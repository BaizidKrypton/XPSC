#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        auto ok=[&](int h)
        {
            ll res=0;
            for(ll val:v)
            {
                if(h>val)
                {
                    res+=(h-val);
                }
            }
            return res<=x;
        };

        ll l=1, r=INT_MAX, mid, ans=INT_MAX;
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
