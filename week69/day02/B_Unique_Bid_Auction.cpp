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
        vector<int> v(n+1);
        map<int,int> mp;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
            v[x]=i+1;
        }

        int ans=-1;
        for(int i=0; i<=n; i++)
        {
            if(mp[i]==1)
            {
                ans=v[i];
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}