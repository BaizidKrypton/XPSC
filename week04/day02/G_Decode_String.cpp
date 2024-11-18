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
        string ans;
        vector<int> v;
        for(char x:s)
        {
            if(isdigit(x))
            {
                v.push_back(x-'0');
            }
        }
        
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        // pair<char,int> p[26];
        // int i=1;
        // for(char c='a'; c<='z'; c++)
        // {
        //     p[0]={c,i};
        //     i++;
        // }
        
        // while(!s.empty())
        // {
        //     if(s.size()>=3)
        //     {
        //         if(s[2]=='0')
        //         {

        //         }
        //     }
        //     else
        //     {
        //         ans+=p[s[0]-1].first;
        //         s.erase(0,1);
        //     }
        // }
        // cout<<ans<<endl;

    }

    return 0;
}