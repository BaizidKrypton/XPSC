#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;

        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        ll max_time=b;

        for(int i=0; i<n; i++)
        {
            max_time+=min(v[i],a-1);
        }

        cout<<max_time<<endl;
    }

    return 0;
}