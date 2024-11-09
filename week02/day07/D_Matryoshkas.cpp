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
        vector<int> v;
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            mp[x]++;
        }

        sort(v.begin(),v.end());
        int ans=0;

        for(int i=0; i<n; i++)
        {
            int s=v[i];
            if(mp[v[i]]!=0)
            {
                ans++;
                while(mp[s]>0)
                {
                    mp[s]--;
                    s++;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}