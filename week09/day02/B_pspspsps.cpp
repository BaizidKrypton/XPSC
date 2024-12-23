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

        int sf=0;
        int pf=0;
        int si=0;
        int pi=-1;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='s')
            {
                sf++;
                si=i;
            }
            if(s[i]=='p')
            {
                pf++;
                if(pi==-1)
                {
                    pi=i;
                }
            }
        }

        int flag=0;
        if(sf==0 || pf==0)
        {
            flag=1;
        }

        if(si==0 || pi==n-1)
        {
            flag=1;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
