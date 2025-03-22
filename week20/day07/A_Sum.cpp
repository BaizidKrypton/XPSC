#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int tmp;
        tmp=a-b;
        tmp-=c;

        if(tmp==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        tmp;
        tmp=b-c;
        tmp-=a;

        if(tmp==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        tmp;
        tmp=c-b;
        tmp-=a;

        if(tmp==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            continue;
        }
    }

    return 0;
}