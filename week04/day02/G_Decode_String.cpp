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
        
        vector<char> alpha;
        for(char c='a'; c<='z'; c++)
        {
            alpha.push_back(c);
        }

        while(!s.empty())
        {
            if(s.size()>=3 && s[s.size()-1]=='0')
            {
                string s2;
                s2+=s[s.size()-3];
                s2+=s[s.size()-2];
                int val=stoi(s2);
                ans+=alpha[val-1];
                s.pop_back();
                s.pop_back();
                s.pop_back();
            }
            else
            {
                string s3;
                s3+=s[s.size()-1];
                int val=stoi(s3);
                ans+=alpha[val-1];
                s.pop_back();
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
     }

    return 0;
}
