#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cnt=0;
    string ans="";
    for(int i=0; i<n; i++)
    {
        if(s[i]=='x')
        {
            cnt++;
            if(cnt<3)
            {
                ans+=s[i];
            }
        }
        else
        {
            cnt=0;
            ans+=s[i];
        }
    }
    
    cout<<n-ans.size()<<endl;

    return 0;
}