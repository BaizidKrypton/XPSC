#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        vector<pair<ll,ll>> qq(q);
        vector<ll> ans(q);
        ll sum=0;
        for(int i=0; i<q; i++)
        {
            cin>>qq[i].first;
            qq[i].second=i;
        }

        sort(qq.begin(),qq.end());

        ll pos=0;
        for(int i=0; i<q; i++)
        {
            while(pos<n && v[pos]<=qq[i].first)
            {
                sum+=v[pos];
                pos++;
            }
            ans[qq[i].second]=sum;
        }

        for(ll val:ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}