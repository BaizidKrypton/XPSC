#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int cnt=0;
    if(s==t)
    {
        cout<<cnt<<endl;
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=t[i])
            {
                s[i]=t[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}