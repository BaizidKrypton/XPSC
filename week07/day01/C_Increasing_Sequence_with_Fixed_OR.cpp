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
        deque<ll> ans;

        for(int i=0; i<=__lg(n); i++)
        {
            if((n>>i) & 1)
            {
                ll value=(n-(1ll<<i));
                if(value>0)
                {
                    ans.push_front(value);
                }
            }
        }
        ans.push_back(n);
        cout<<ans.size()<<endl;

        for(auto value:ans)
        {
            cout<<value<<" ";
        }
        cout<<endl;
    }

    return 0;
}
