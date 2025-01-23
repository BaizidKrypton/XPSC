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
        while(n>0 && x>=20)
        {
            x=(x/2)+10;
            n--;
            if(x<=0)
            {
                flag=true;
                break;
            }
        }
        
        if(!flag)
        {
            while(m>0)
            {
                x-=10;
                m--;
                if(x<=0)
                {
                    flag=true;
                    break;
                }
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
