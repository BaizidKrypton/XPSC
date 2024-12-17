#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,b;
        cin>>n>>k;
        vector<ll> v,t;
        for(int i=0; i<n; i++)
        {
            cin>>b;
            v.push_back(b);
        }
        t=v;
        sort(t.begin(),t.end());
        ll miss=n;

        for(int i=0; i<n; i++)
        {
            if(t[i]!=i)
            {
                miss=i;
                break;
            }
        }

        ll st;
        for(int i=0; i<n; i++)
        {
            st=v[i];
            v[i]=miss;
            miss=st;
        }
        v.push_back(miss);
        ll lst=(k-1)%(n+1);
        for(int i=(n+1-lst); i<(n+1); i++)
        {
            cout<<v[i]<<" ";
        }
        for(int i=0; i<(n-lst); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
