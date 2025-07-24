#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string v;
        cin>>v;
        map<char,int> mp;
        int x=1;

        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]=x;
            x++;
        }

        int ans=0;
        for(int i=0; i<v.size()-1; i++)
        {
            ans+=(abs(mp[v[i]]-mp[v[i+1]]));
        }
        cout<<ans<<endl;
    }

    return 0;
}