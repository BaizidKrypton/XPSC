#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int x=n%4;

    if(x==0 || x==3)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }

    return 0;
}