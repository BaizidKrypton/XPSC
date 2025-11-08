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
        string v=s+s;
        map<char,int> mp;
        
        for(int i=0; i<v.size(); i++)
        {
            mp[v[i]]++;
        }

        int x=0,y=v.size()-1;
        vector<char> ans(v.size());
        for(int i=0; i<s.size(); i++)
        {
            while(mp[s[i]]>0)
            {
                ans[x]=s[i];
                ans[y]=s[i];
                x++;
                y--;
                mp[s[i]]-=2;
            }
        }

        for(auto x:ans)
        {
            cout<<x;
        }
        cout<<endl;
    }

    return 0;
}