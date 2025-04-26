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
        vector<vector<int>> v(n,vector<int> (n));

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>v[i][j];
            }
        }

        int ans=0;
        for(int i=0; i<n; i++)
        {
            int a=0;
            int b=i;
            int mn=0;

            while(a<n && b<n)
            {
                if(v[a][b]<0)
                {
                    mn=min(mn,v[a][b]);
                }
                a++;
                b++;
            }
            ans+=abs(mn);
        }

        for(int i=1; i<n; i++)
        {
            int a=i;
            int b=0;
            int mn=0;

            while(a<n && b<n)
            {
                if(v[a][b]<0)
                {
                    mn=min(mn,v[a][b]);
                }
                a++;
                b++;
            }
            ans+=abs(mn);
        }

        cout<<ans<<endl;
    }

    return 0;
}