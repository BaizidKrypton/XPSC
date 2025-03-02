#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> a(n);
        vector<ll> b(m);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        if(k%2==0)
        {
            if(a[0]<b[m-1])
            {
                swap(a[0],b[m-1]);
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
            }
            if(b[0]<a[n-1])
            {
                swap(a[n-1],b[0]);
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
            }
        }
        else
        {
            if(a[0]<b[m-1])
            {
                swap(a[0],b[m-1]);
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
            }   
        }

        ll ans=0;
        for(ll val:a)
        {
            ans+=val;
        }

        cout<<ans<<endl;
    }

    return 0;
}