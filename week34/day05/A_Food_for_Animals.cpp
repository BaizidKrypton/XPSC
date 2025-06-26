#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        if(a>=x)
        {
            x=0;
        }
        else
        {
            x-=a;
        }
        if(b>=y)
        {
            y=0;
        }
        else
        {
            y-=b;
        }

        if(c>=(x+y))
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