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

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        ll ans=0;
        ll dif=0;

        for(int i=1; i<n; i++)
        {
            if(v[i]<v[i-1])
            {
                ans+=v[i-1]-v[i];
                dif=max(dif,v[i-1]-v[i]);
                v[i]=v[i-1];
            }
        }
        ans+=dif;
        cout<<ans<<endl;
    }

    return 0;
}