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
        vector<ll> v1(n);
        vector<char> v2;
        vector<int> v_l;
        vector<int> v_r;
        for(int i=0; i<n; i++)
        {
            cin>>v1[i];
        }
        for(int i=0; i<n; i++)
        {
            char c;
            cin>>c;
            if(c=='L')
            {
                v_l.push_back(i);
            }
            v2.push_back(c);
        }
        for(int i=n-1; i>=0; i--)
        {
            if(v2[i]=='R')
            {
                v_r.push_back(i);

            }
        }

        vector<ll> prefix(n,0);
        prefix[0]=v1[0];
        for(int i=1; i<n; i++)
        {
            prefix[i]=prefix[i-1]+v1[i];
        }

        ll sum=0;
        int i=0;

        while((i<v_l.size() && i<v_r.size()) && (v_l[i]<v_r[i]))
        {
            sum+=prefix[v_r[i]];
            if(v_l[i]!=0)
            {
                sum-=prefix[v_l[i]-1];
            }
            i++;
        }
        cout<<sum<<endl;
    }

    return 0;
}