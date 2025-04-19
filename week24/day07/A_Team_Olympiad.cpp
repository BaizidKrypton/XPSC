#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    map<int,queue<int>> m;
        
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
        m[v[i]].push(i+1);
    }

    int mx=INT_MAX;
    int flag=1;
    for(int i=1; i<=3; i++)
    {
        mx=min(mx,mp[i]);
        if(mp[i]==0)
        {
            flag=0;
            break;
        }
    }

    if(!flag)
    {
        cout<<mx<<endl;
    }
    else
    {
        cout<<mx<<endl;
        for(int i=0; i<mx; i++)
        {
            for(auto[x,y]:m)
            {
                cout<<m[x].front()<<" ";
                m[x].pop();
            }
            cout<<endl;
        }
    }

    return 0;
}