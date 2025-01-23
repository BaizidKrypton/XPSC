#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,m;
        cin>>x>>n>>m;

        bool flag=false;
        while(n>0 || m>0)
        {
            int tmp=x;
            int attack1=(tmp/2)+10;
            int attack2=tmp-10;

            if(attack1<=attack2 && n>0)
            {
                x=attack1;
                n--;
            }
            else if(m>0)
            {
                x=attack2;
                m--;
            }

            if(x<=0)
            {
                flag=true;
                break;
            }
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