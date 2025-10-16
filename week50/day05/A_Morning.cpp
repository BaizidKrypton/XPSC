#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        int cur=1;

        for(int i=0; i<4; i++)
        {
            int x=s[i]-'0';
            if(x==cur)
            {
                ans++;
                cur=x;
            }
            else if((cur==0 && x==1) || (cur==1 && x==0))
            {
                ans+=10;
                cur=x;
            }
            else
            {
                if(cur==0)
                {
                    ans+=(10-x);
                    ans++;
                    cur=x;
                }
                else if(x==0)
                {
                    ans+=abs(cur-10);
                    ans++;
                    cur=x;
                }
                else
                {
                    ans+=abs(cur-x);
                    ans++;
                    cur=x;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}