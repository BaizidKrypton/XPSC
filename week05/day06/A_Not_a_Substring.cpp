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
        if(s=="()")
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int op1=false;
            for(int i=0; i<s.size()-1; i++)
            {
                if(s[i]=='(' && s[i+1]=='(' || s[i]==')' && s[i+1]==')')
                {
                    op1=true;
                }
            }
            string ans="";

            if(op1)
            {
                for(int i=0; i<s.size(); i++)
                {
                    ans+="()";
                }
            }
            else
            {
                for(int i=0; i<s.size(); i++)
                {
                    ans+="(";
                }
                for(int i=0; i<s.size(); i++)
                {
                    ans+=")";
                }
            }
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
    }

    return 0;
}