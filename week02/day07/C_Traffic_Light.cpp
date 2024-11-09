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
        char c;
        cin>>c;
        string s;
        cin>>s;

        if(c=='g')
        {
            cout<<"0"<<endl;
            continue;
        }

        int fst;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='g')
            {
                fst=i;
                break;
            }
        }
        
        for(int i=0; i<n; i++)
        {
            if(s[i]==c)
            {
                int cnt=0;
                int flag=0;
                for(int j=i+1; j<n; j++)
                {
                    cnt++;
                    if(s[j]=='g')
                    {
                        flag++;
                        break;
                    }
                }
                i=i+cnt;
                if(flag)
                {
                    ans=max(ans,cnt);
                }
                else
                {
                    ans=max(ans,cnt+1+fst);
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}