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

        ll g1=0;
        ll g2=0;

        for(int i=0; i<n; i+=2)
        {
            g1=__gcd(g1,v[i]);
        }
        for(int i=1; i<n; i+=2)
        {
            g2=__gcd(g2,v[i]);
        }

        ll ans=0;
        int flag=1;
        for(int i=1; i<n; i+=2)
        {
            if(v[i]%g1==0)
            {
                flag=0;
            }
        }

        if(flag)
        {
            ans=g1;
        }
        else
        {
            flag=1;
            for(int i=0; i<n; i+=2)
            {
                if(v[i]%g2==0)
                {
                    flag=0;
                }
            }

            if(flag)
            {
                ans=g2;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
