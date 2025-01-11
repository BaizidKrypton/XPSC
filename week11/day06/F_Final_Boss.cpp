#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll h,n;
        cin>>h>>n;
        vector<ll> a(n);
        vector<ll> c(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
        }

        auto ok=[&](ll x)
        {
            ll sum=0;
            for(int i=0; i<n; i++)
            {
                ll z=(x-1)/c[i];
                z+=1;
                sum+=(z*a[i]);
                if(sum>=h)
                {
                    break;
                }
            }
            return sum>=h;
        };

        ll l=1, r=2e12, mid, ans=r;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(ok(mid))
            {
                ans=min(ans,mid);
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
