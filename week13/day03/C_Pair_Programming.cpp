#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n,m;
        cin>>k>>n>>m;
        vector<int> v1(n);
        vector<int> v2(m);
        
        for(int i=0; i<n; i++)
        {
            cin>>v1[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>v2[i];
        }

        int x=0,y=0;
        int flag=0,z=k;
        vector<int> ans;
        
        while(n>x || m>y)
        {
           if(v1[x]==0 && x<n)
           {
                ans.push_back(0);
                x++;
                z++;
           }
 
           else if(v2[y]==0 && y<m)
           {
                ans.push_back(0);
                y++;
                z++;
           }
 
           else if(v1[x]<=z && v1[x]!=0 && x<n)
           {
                ans.push_back(v1[x]);
                x++;
           }
 
           else if(v2[y]<=z && v2[y]!=0 && y<m)
           {
                ans.push_back(v2[y]);
                y++;
           }
 
           else 
           {
                flag=1;
                break;
           }
        }

        if(flag)
        {
            cout<<"-1"<<endl;
        } 
        else 
        {
            for(int i=0; i<ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            } 
            cout<<endl;
        }
    }
    return 0;
}
