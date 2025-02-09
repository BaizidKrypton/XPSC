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
        map<char,int> mp;
        map<char,vector<int>> cos;
        vector<int> ans;
        for(int i=0; i<s.size(); i++)
        {
            cos[s[i]].push_back(i+1);
        }
        char st=s[0];
        char ed=s[s.size()-1];

        int val=1;
        for(char c='a'; c<='z'; c++)
        {
            mp[c]=val;
            val++;
        }

        int cost=abs(mp[st]-mp[ed]);
        cout<<cost<<" ";
        if(st<=ed)
        {
            for(char c=st; c<=ed; c++)
            {
                if(cos.find(c)!=cos.end())
                {
                    for(auto x:cos[c])
                    {
                        ans.push_back(x);
                    }
                }
            }
        }
        else
        {
            for(char c=st; c>=ed; c--)
            {
                if(cos.find(c)!=cos.end())
                {
                    for (auto x:cos[c])
                    {
                        ans.push_back(x);
                    }
                }
            }
        }

        cout<<ans.size()<<endl;
        for(int b:ans)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }

    return 0;
}