#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;

        string tmp=x;
        int flag=0;
        int cnt=0;

        for(int i=0; i<=5; i++)
        {
            auto pos=tmp.find(s);
            if(pos!=string::npos)
            {
                flag=1;
                break;
            }

            tmp+=tmp;
            cnt++;
        }

        if(flag)
        {
            cout<<cnt<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }

    return 0;
}