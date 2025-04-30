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
        cin >>s>>v;

        int flag=1;
        int extraOnes = 0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0' && v[i]=='1')
            {
                flag=0;
                break;
            }
        }

        if(flag)
        {
            int cnts1=0;
            int cntv1=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    cnts1++;
                }
                if(v[i]=='1')
                {
                    cntv1++;
                }
            }

            cnts1-=cntv1;

            if(cnts1<0 || cnts1%2!=0)
            {
                flag=0;
            }
        }

        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
