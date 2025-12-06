#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;

        int ans=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                bool flag=true;

                for(int j=i-k; j<i; j++)
                {
                    if(j>=0 && s[j]=='1')
                    {
                        flag=false;
                        break;
                    }
                }

                if(flag)
                {
                    ans++;
                }  
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
