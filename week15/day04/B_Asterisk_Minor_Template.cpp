#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;

        if(s[0]==t[0])
        {
            cout<<"YES"<<endl;
            cout<<s[0]<<"*"<<endl;
            continue;
        }
        else if(s.back()==t.back())
        {
            cout<<"YES"<<endl;
            cout<<"*"<<s.back()<<endl;
            continue;
        }
        else if(s[s.size()-1]==t[t.size()-1])
        {
            cout<<"YES"<<endl;
            cout<<"*"<<s[s.size()-1]<<endl;
            continue;
        }
        else
        {
            string ans="";

            for(int i=0; i<s.size()-1; i++)
            {
                for(int j=0; j<t.size()-1; j++)
                {
                    if(s[i]==t[j] && s[i+1]==t[j+1])
                    {
                        ans="";
                        ans.push_back(s[i]);
                        ans.push_back(s[i+1]);
                        break;
                    }
                }
            }
            if(ans.size())
            {
                cout<<"YES"<<endl;
                cout<<"*"<<ans<<"*"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}