#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        set<ll> st;
        for(int i=0; i<n; i++)
        {
            st.insert(v[i]);
        }

        vector<ll> a;
        for(auto val:st)
        {
            a.push_back(val);
        }

        ll ans=0;
        for(int i=0; i<a.size(); i++)
        {
            auto it=lower_bound(a.begin(),a.end(),a[i]+n);
            ll d=it-a.begin()-i;
            ans=max(ans,d);
        }
        cout<<ans<<endl;
    }

    return 0;
}