#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int ans=0;
    for(int i=0; i<s.size(); i++)
    {
        ans+=pow(2,i);
    }

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='7')
        {
            ans+=pow(2,(s.size()-i-1));
        }
    }

    cout<<ans<<endl;

    return 0;
}