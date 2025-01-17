#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        map<int,int> mp;
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
            mp[b[i]]++;
        }

        int ans=0;
        map<int,int> frq;
        int cnt=0;

        for(int i=0; i<m; i++)
        {
            frq[a[i]]++;
            if(frq[a[i]]<=mp[a[i]])
            {
                cnt++;
            }
        }

        if(cnt>=k)
        {
            ans++;
        }
        for(int i=m; i<n; i++)
        {
            frq[a[i]]++;
            if(frq[a[i]]<=mp[a[i]])
            {
                cnt++;
            }

            frq[a[i-m]]--;
            if(frq[a[i-m]]<mp[a[i-m]])
            {
                cnt--;
            }
            if(cnt>=k)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
