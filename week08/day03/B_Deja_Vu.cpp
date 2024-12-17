#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n),b(m);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }

        map<ll,ll> mp;
        for(int k=0; k<m; k++)
        {
            if(mp[b[k]])
            {
                continue;
            }
            ll j=b[k];
            for(int i=0; i<n; i++)
            {
                ll s=pow(2,j);
                if(a[i]%s==0)
                {
                    ll x=pow(2,j-1);
                    a[i]+=x;
                }
            }
            mp[b[k]]=1;
        }
        for(int val:a)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}
