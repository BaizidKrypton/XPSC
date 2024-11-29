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
        vector<ll> v(n);
        map<ll,ll> mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        pair<ll,ll> mx={0,0};
        for(auto[x,y]:mp)
        {
            if(y>mx.second)
            {
                mx.first=x;
                mx.second=y;
            }
        }

        ll op=n-mx.second;
        ll x=n-mx.second;
        ll y=mx.second;
        while(x>0)
        { 
            op++;
            x-=y;
            y*=2;
        }
        cout<<op<<endl;
    }

    return 0;
}