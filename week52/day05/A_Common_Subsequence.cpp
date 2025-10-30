#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        map<int,int> mp;
        int flag=0;
        int ans;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
            if(mp[b[i]]>0 && flag==0)
            {
                flag=1;
                ans=b[i];
            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<ans<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}