#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        ll ans=0;
        ll win=0;

        for(int i=0; i<n; i++)
        {
            if(v[i]<=q)
            {
                win++;
            }
            if(i==n-1 || v[i]>q)
            {
                if(win>=k)
                {
                    ll cnt=win-k+1;
                    ans+=(cnt*(cnt+1))/2;
                }
                win=0;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
