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

        ll l=max(n-m,(ll)0);
        ll r=n+m;
        ll ins=0;
        ll ans=0;
        for(int i=0; i<31; i++)
        {
            if(((1<<i) & l)==0)
            {
                ll check=(l|(1<<i))-ins;
                if(check<=r)
                {
                    ans|=(1<<i);
                }
            }
            else
            {
                ans|=(1<<i);
                ins|=(1<<i);
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}