#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> adj[200005];
vector<ll> leaf;
 
void dfs(int cur,int par)
{
	bool child=false;

	for(auto i:adj[cur])
    {
		if(i==par)
        {
            continue;
        }
		child=true;
		dfs(i,cur);
		leaf[cur]+=leaf[i];
	}

	if(!child)
    {
		leaf[cur]=1;
	}
}

int main()
{
    int t;							
    cin>>t;
    while(t--)
    {
   		int n;					
        cin>>n;

   		for(int i=0; i<=n; i++)
        {
   			adj[i].clear();
   		}

   		leaf.assign(n+2,0);

   		for(int i=1; i<=n-1; i++)
        {
   			int u,v;				
            cin>>u>>v;
   			adj[u].push_back(v);
   			
   		}

   		dfs(1,-1);
   		int q;					
        cin>>q;

   		while(q--)
        {
   			int x,y;				
            cin>>x>>y;
   			ll ans=leaf[x]*leaf[y];
   			cout<<ans<<endl;
   		}
   }

    return 0;
}
