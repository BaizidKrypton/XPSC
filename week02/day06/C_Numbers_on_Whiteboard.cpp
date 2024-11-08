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
        vector<int> v;
    
        for(int i=1; i<=n; i++)
        {
            v.push_back(i);
        }

        vector<pair<int,int>> p;
        for(int i=1; i<n; i++)
        {
            int a=v[v.size()-1];
            int b=v[v.size()-2];
            int ans=ceil((a+b+1)/2);
            p.push_back({a,b});
            v.pop_back();
            v.pop_back();
            v.push_back(ans);    
        }
        cout<<v[0]<<endl;
        for(auto val:p)
        {
            cout<<val.first<<" "<<val.second<<endl;
        }
    }

    return 0;
}