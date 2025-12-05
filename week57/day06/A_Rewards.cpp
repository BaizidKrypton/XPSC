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

    int x=(a+5-1)/5;
    int y=(b+10-1)/10;

    if(x+y>n)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    return 0;
}