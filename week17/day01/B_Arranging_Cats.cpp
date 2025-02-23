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
        string s,f;
        cin>>s>>f;

        int s_one=0;
        int f_one=0;
        int ans=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                s_one++;
            }
            if(f[i]=='1')
            {
                f_one++;
            }
        }

        if(s_one>f_one)
        {
            ans+=s_one-f_one;
        }

        for(int i=0; i<n; i++)
        {
            if(f[i]=='1' && s[i]=='0')
            {
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
