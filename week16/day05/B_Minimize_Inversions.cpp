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
        vector<int> v(n);
        map<int,int> mp;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            mp[v[i]]=x;
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

        for(int i=0; i<n; i++)
        {
            cout<<mp[v[i]]<<" ";
        }
        cout<<endl;
    }

    return 0;
}