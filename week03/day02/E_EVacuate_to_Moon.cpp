#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll> vn;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            vn.push_back(x);
        }
        vector<ll> vm;
        for(int i=0; i<m; i++)
        {
            ll x;
            cin>>x;
            vm.push_back(x);
        }

        sort(vn.begin(),vn.end(),greater<ll>());
        sort(vm.begin(),vm.end(),greater<ll>());

        ll mn=min(n,m);
        ll charge=0;
        for(int i=0; i<mn; i++)
        {
            if(vm[i]*h>vn[i])
            {
                charge+=vn[i];
            }
            else
            {
                charge+=(vm[i]*h);
            }
        }
        cout<<charge<<endl;
    }

    return 0;
}