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
        vector<vector<int>> v(n,vector<int>(n-1));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin>>v[i][j];
            }
        }

        map<int,int> mp;

        for(int i=0; i<n; i++)
        {
            mp[v[i][n-2]]++;
        }

        int val;

        for(auto [x,y]:mp)
        {
            if(y==1)
            {
                val=x;
                break;
            }
        }

        int pos;
        for(int i=0; i<n; i++)
        {
            if(v[i][n-2]==val)
            {
                pos=i;
            }
        }

        for(int i=pos; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cout<<v[i][j]<<" ";
            }
            break;
        }
        if(pos>0)
        {
            cout<<v[0][n-2]<<endl;
        }
        else if(pos==0)
        {
            cout<<v[1][n-2]<<endl;
        }
     }

    return 0;
}
