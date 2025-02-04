cpp #include <bits/stdc++.h>
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
        int n;
        cin>>n;

        vector<int> a(n);
        vector<int> b(n);
        set<int> s;
        map<int,int> mp;
        pbds st;

        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
            mp[a[i]]=b[i];
            st.insert(b[i]);
        }

        sort(a.begin(),a.end());
        int ans=0;

        for(int i=0; i<n; i++)
        {
            int x=mp[a[i]];
            int y=st.order_of_key(x);
            int z=st.order_of_key(a[i]);
            ans+=(y-z);
            st.erase(x);
        }

        cout<<ans<<endl;
    }   

    return 0;
}
