#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;

        vector<pair<ll,ll>> a(c),b(c);
        ll cur=n;

        for(int i=0; i<c; i++)
        {
            cin>>b[i].first>>b[i].second;
            ll blen=b[i].second-b[i].first+1;

            a[i].first=cur+1;
            a[i].second=cur+blen;
            cur=a[i].second;
        }

        while(q--)
        {
            ll idx;
            cin>>idx;

            for(int i=c-1; i>=0; i--)
            {
                if(idx>=a[i].first && idx<=a[i].second)
                {
                    ll x=idx-a[i].first;
                    idx=b[i].first+x;
                }
            }
            cout<<s[idx-1]<<endl;
        }
    }

    return 0;
}