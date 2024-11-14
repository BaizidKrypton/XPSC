#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int w=0;
        int ans=INT_MAX;
        int l=0;
        int r=0;
        while(r<n)
        {
            if(s[r]=='W')
            {
                w++;
            }
            if(r-l+1==k)
            {
                ans=min(ans,w);
                if(s[l]=='W')
                {
                    w--;
                }
                r++;
                l++;
            }
            else
            {
                r++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}