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
        vector<ll> v(n);
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }

        if((2*sum)%n)
        {
            cout<<"0"<<endl;
            continue;
        }

        ll ans=0;
        map<ll,ll> mp;
        for(int i=0; i<n; i++)
        {
            ans+=mp[2*sum/n-v[i]];
            mp[v[i]]++;
        }

        cout<<ans<<endl;
    }

    return 0;
}
