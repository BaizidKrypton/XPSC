#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int b1,b2,b3;
    cin>>b1>>b2>>b3;
    int n;
    cin>>n;

    int a=a1+a2+a3;
    int b=b1+b2+b3;

    int x,y;
    if(a==0)
    {
        x=0;
    }
    else if(a<=5)
    {
        x=1;
    }
    else
    {
        x=a/5;
    }

    if(b==0)
    {
        y=0;
    }
    else if(b<=10)
    {
        y=1;
    }
    else
    {
        y=b/10;
    }

    if(x+y<=n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}