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
        map<ll,ll>mp;
        ll ans=0;

        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            ans+=mp[x-i];
            mp[x-i]++;
        }
        
        cout<<ans<<endl;
    }

    return 0;
}