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
        string s,v;
        cin>>s;
        v=s;

        sort(v.begin(),v.end());
        int ans=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]!=v[i])
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}