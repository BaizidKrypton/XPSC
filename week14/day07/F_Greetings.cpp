#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define pbds tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll> a(n);
        vector<ll> b(n);
        set<ll> s;
        map<ll,ll> mp;
        pbds st;

        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
            mp[a[i]]=b[i];
            st.insert(b[i]);
        }

        sort(a.begin(),a.end());
        ll ans=0;

        for(int i=0; i<n; i++)
        {
            ll x=mp[a[i]];
            ll y=st.order_of_key(x);
            ll z=st.order_of_key(a[i]);
            ans+=(y-z);
            st.erase(x);
        }

        cout<<ans<<endl;
    }   

    return 0;
}
