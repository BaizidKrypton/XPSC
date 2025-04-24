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

        int ans=0;
        int cnt;
        for(int i=0; i<n; i++)
        {
            cnt=0;
            for(int j=0; j<n; j++)
            {
                if(i==j)
                {
                    if(s[j]=='0')
                    {
                        cnt++;
                    }
                }
                else if(s[j]=='1')
                {
                    cnt++;
                }
            }
            ans+=cnt;
        }

        cout<<ans<<endl;
    }

    return 0;
}