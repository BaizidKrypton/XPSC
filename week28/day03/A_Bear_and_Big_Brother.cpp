#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int x=0;
    while(1)
    {
        if(a>b)
        {
            break;
        }
        else
        {
            a*=3;
            b*=2;
            x++;
        }
    }

    cout<<x<<endl;
}