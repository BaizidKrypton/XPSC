#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,w;
    cin>>x>>w;

    int mx=max(x,w);
    mx=6-mx;
    mx++;
    if(mx==1)
    {
        cout<<1<<"/"<<6<<endl;
    }
    else if(mx==2)
    {
        cout<<1<<"/"<<3<<endl;
    }
    else if(mx==3)
    {
        cout<<1<<"/"<<2<<endl;
    }
    else if(mx==4)
    {
        cout<<2<<"/"<<3<<endl;
    }
    else if(mx==5)
    {
        cout<<5<<"/"<<6<<endl;
    }
    else
    {
        cout<<1<<"/"<<1<<endl;
    }

    return 0;
}