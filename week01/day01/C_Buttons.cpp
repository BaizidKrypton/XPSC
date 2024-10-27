#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int coin;
    int mx=max(a,b);
    coin=mx;
    if(mx==a)
    {
        a--;
    }
    else
    {
        b--;
    }
    mx=max(a,b);
    coin+=mx;
    cout<<coin<<endl;

    return 0;
}