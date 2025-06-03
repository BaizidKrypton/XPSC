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
            int a,b;
            cin>>a>>b;
            v[i].first=a;
            v[i].second=b;
        }

        int mx=INT_MIN;
        int ans;
        int i=0;
        for(auto[x,y]:v)
        {
            i++;
            if(x>10)
            {
                continue;
            }
            else
            {
                if(y>mx)
                {
                    mx=y;
                    ans=i;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}