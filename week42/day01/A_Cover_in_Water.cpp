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

        int cnt=0;
        int tmp=0;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='.')
            {
                tmp++;
            }
            else
            {
                if(tmp==0)
                {
                    continue;
                }
                else if(tmp>2)
                {
                    flag=1;
                    cnt=2;
                    break;
                }
                else
                {
                    cnt+=tmp;
                }
                tmp=0;
            }

            if(i==n-1)
            {
                if(tmp>2)
                {
                    flag=1;
                    cnt=2;
                    break;
                }
                else
                {
                    cnt+=tmp;
                }
            }
        }

        if(flag)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }
    }

    return 0;
}