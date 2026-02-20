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

    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        if(mp[v[i]]==1)
        {
            ans.push_back(v[i]);
        }
        else
        {
            mp[v[i]]--;
        }
    }

    cout<<ans.size()<<endl;
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}