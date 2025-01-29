#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        ll ans=0;

        for(int i=0; i<n-1; i++)
        {
            auto it1=lower_bound(v.begin()+i+1,v.end(),l-v[i]);
            auto it2=upper_bound(v.begin()+i+1,v.end(),r-v[i]);
            ans+=(it2-it1);
        }
        cout<<ans<<endl;
    }

    return 0;
}