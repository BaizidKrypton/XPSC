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

        int x=n;
        int ans=0;

        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='*' && s[i]==s[i+1])
            {
                x=i;
                break;
            }
        }

        for(int i=0; i<=x; i++)
        {
            if(s[i]=='@')
            {
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}