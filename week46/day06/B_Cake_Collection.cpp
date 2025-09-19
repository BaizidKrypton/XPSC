#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());

        ll ans=0;
        for(int i=0; i<n; i++)
        {
            ans+=1ll*v[i]*max(0,m-i);
        }
        
        cout<<ans<<endl;
    }

    return 0;
}