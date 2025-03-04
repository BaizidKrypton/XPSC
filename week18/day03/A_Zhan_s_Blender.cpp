#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;

        ll fill_time=(n+x-1)/x;
        ll blend_time=(n+y-1)/y;

        ll ans=max(fill_time,blend_time);

        cout<<ans<<endl;
    }

    return 0;
}
