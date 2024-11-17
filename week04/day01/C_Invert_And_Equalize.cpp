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
        int cnt_1=0;
        int cnt_0=0;

        for(int i=0; i<n; )
        {
            if(s[i]=='1')
            {
                while(i<n && s[i]=='1')
                {
                    i++;
                }
                cnt_1++;
            }
            if(s[i]=='0')
            {
                while(i<n && s[i]=='0')
                {
                    i++;
                }
                cnt_0++;
            }
        }

        int ans=min(cnt_1,cnt_0);
        cout<<ans<<endl;     
    }

    return 0;
}