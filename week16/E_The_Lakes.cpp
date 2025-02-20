#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
 
vector<int> a[1005];
bool visited[1005][1005];
 
bool isValid(int x,int y,int n,int m)
{
   return (x>-1 && x<n && y>-1 && y<m && !visited[x][y] && a[x][y]!=0);
}
 
ll dfs(int x,int y,int n,int m)
{
   ll res=a[x][y];
   visited[x][y]=true;

   for(int i=0; i<4; i++)
   {
      int tx=x+dx[i];
      int ty=y+dy[i];
      if(isValid(tx,ty,n,m))
      {
         res+=dfs(tx,ty,n,m);
      }
   }
   return res;
}

int main()
{
    int t;                     
    cin>>t;
    while(t--)
    {
        int n,m;                
        cin>>n>>m;

        for(int i=0; i<n; i++)
        {
            a[i].assign(m,0);
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                visited[i][j]=false;
            }
        }
 
        ll ans=0;
 
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(visited[i][j] || a[i][j]==0)
                {
                    continue;
                }
                ans=max(ans,dfs(i,j,n,m));
            }
        }
 
        cout<<ans<<endl;
    }

    return 0;
}