#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int flag=0;
    for(int i=a; i<=b; i++)
    {
        if(i%c==0)
        {
            flag=1;
            cout<<i<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"-1"<<endl;
    }

    return 0;
}