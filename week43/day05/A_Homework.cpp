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
        string a;
        cin>>a;
        int m;
        cin>>m;
        string b,c;
        cin>>b>>c;

        string ans="";
        for(int i=m-1; i>=0; i--)
        {
            if(c[i]=='V')
            {
                ans.push_back(b[i]);
            }
        }
        ans+=a;
        for(int i=0; i<m; i++)
        {
            if(c[i]=='D')
            {
                ans.push_back(b[i]);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}