#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll op=0;
        ll sum=0;
        vector<ll> cur;
        vector<ll> v(n+1);

        for(int i=0; i<n; i++)
        {
            ll l=i;
            ll r=n-i-1;
            if(s[i]=='L')
            {
                if(r>l)
                {
                    op++;
                    sum+=r;
                    cur.push_back(r-l);
                }
                else
                {
                    sum+=l;
                }
            }
            else
            {
                if(l>r)
                {
                    op++;
                    cur.push_back(l-r);
                    sum+=l;  
                }
                else
                {
                    sum+=r;
                }
            }
        }

        for(int i=op; i<=n; i++)
        {
            v[i]=sum;
        }
        
        sort(cur.begin(),cur.end(),greater<ll>());
        for(int i=op-1; i>=1; i--)
        {
            sum-=cur.back();
            cur.pop_back();
            v[i]=sum;
        }

        for(int i=1; i<=n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}