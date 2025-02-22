#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e18;
int n,m;
vector<int> adj[100005];
vector<bool> vis(100005,false);
vector<int> a[100005];
int result;

void dfs(int u,int cnt)
{
    vis[u]=true;
    if(adj[u].size()==1 && u!=1)
    {
        result++;
        //cout<<u<<" "<<cnt<<endl;
        return;
    }

    for(auto v:adj[u])
    {
        if(!vis[v])
        {
            vis[v]=true;
            if(a[v]==1)
            {
                if(cnt+1<=m)
                {
                    dfs(v,cnt+1);
                }
            }
            else
            {
                dfs(v,0);
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for(int i=0; i<n; i++)
    // {
    //     sort(adj[i].begin(),adj[i].end();)
    // }
    dfs(1,a[1]);
    cout<<result<<endl;

    return 0;
}