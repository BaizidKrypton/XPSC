#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,s;
    cin>>n>>s;
    vector<ll> v(n);
    for(int  i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int l=0;
    int r=0;
    ll sum=0;
    ll ans=0;

    while(r<n)
    {
        sum+=v[r];
        if(sum<=s)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(sum>s && l<=r)
            {
                sum-=v[l];
                l++;
            }
            if(sum<=s)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<endl;

    return 0;
}
