#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll ans=0;
    map<ll,ll> mp;

    ll r=0;
    for(int i=0; i<n; i++)
    {
        mp[v[i]]++;
        while(mp.size()>k)
        {
            mp[v[r]]--;
            if(mp[v[r]]==0)
            {
                mp.erase(v[r]);
            }
            r++;
        }
        ans+=(i-r+1);
    }
    cout<<ans<<endl;

    return 0;
}
