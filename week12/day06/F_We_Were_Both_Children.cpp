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
            if(v[i]<=n)
            {
                mp[v[i]]++;
            }
        }
    
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            int x=0;
            for(int j=1; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    x+=mp[j];
                    if(j*j!=i)
                    {
                        x+=mp[i/j];
                    }
                }
            }
            ans=max(ans,x);
        }
        cout<<ans<<endl;
    }

    return 0;
}