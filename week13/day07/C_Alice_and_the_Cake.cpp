#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        map<ll,ll>mp;
        ll sum=0;
        vector<ll>v2;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            mp[v[i]]++;
            v2.push_back(v[i]);
        }

        vector<ll>v3;
        priority_queue<ll>pq;
        pq.push(sum);

        for(int i=1; i<n; i++)
        {
            while(!pq.empty() && mp[pq.top()]!=0)
            {
                v3.push_back(pq.top());
                mp[pq.top()]--;
                pq.pop();
            }

            if(!pq.empty())
            {
                ll x =pq.top();
                pq.pop();
                ll a,b;

                if(x%2==0)
                {
                    a=x/2;
                    b=x/2;
                }
                else
                {
                    a=x/2;
                    b=x/2 + 1;
                }

                pq.push(a);
                pq.push(b);
            }
        }

        while(!pq.empty() && mp[pq.top()]!=0)
        {
            v3.push_back(pq.top());
            mp[pq.top()]--;
            pq.pop();
        }

        sort(v3.begin(),v3.end());
        sort(v2.begin(),v2.end());

        if(v3==v2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        } 
    }
}