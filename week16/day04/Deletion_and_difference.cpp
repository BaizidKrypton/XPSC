#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        int zero=0;
        for(auto[x,y]:mp)
        {
            if(x!=0 && (y>1 && y%2==0))
            {
                mp[x]=0;
                mp[0]++;
            }
            else if(x!=0 && (y>1 && y%2!=0))
            {
                mp[x]=1;
                mp[0]++;

            }
        }

        int ans=0;
        
        for(auto[x,y]:mp)
        {
            if(x==0)
            {
                continue;
            }
            ans+=y;
        }
        if(mp[0]>0)
        {
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}