#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    set<int> s;
    int dp[100000];
    for(int i=v.size()-1; i>=0; i--)
    {
        s.insert(v[i]);
        dp[i]=s.size();
    }

    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        cout<<dp[x-1]<<endl;
    }

    return 0;
}