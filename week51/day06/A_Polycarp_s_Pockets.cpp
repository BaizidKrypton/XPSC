#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mp;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    int ans=0;
    for(auto[x,y]:mp)
    {
        ans=max(ans,y);
    }
    cout<<ans<<endl;


    return 0;
}