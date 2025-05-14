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
        vector<pair<int,int>> v(n);

        for(int i=0; i<n; i++)
        {
            int x,y;
            cin>>x>>y;
            v[i].first=y;
            v[i].second=x;
        }
        sort(v.begin(),v.end());

        int ans;
        for(int i=0; i<n; i++)
        {
            if(v[i].second>=7)
            {
                ans=v[i].first;
                break;
            }
            else
            {
                ans=-1;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}