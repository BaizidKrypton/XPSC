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
        string s;
        cin>>s;

        map<char,int> mp;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }

        vector<pair<int,char>> v;

        for(auto[x,y]:mp)
        {
            v.push_back({y,x});
        }

        sort(v.begin(),v.end(),greater<pair<int,char>>());

        string ans(n,' ');
        int idx=0;
        for(auto[x,y]:v)
        {
            if(x==0)
            {
                break;
            }
            while(x>0)
            {
                if(idx>=n)
                {
                    idx=1;
                }
                ans[idx]=y;
                idx+=2;
                x--;
            }
        }   

        cout<<ans<<endl;   
    }

    return 0;
}
