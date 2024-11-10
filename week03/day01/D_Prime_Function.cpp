#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int flag=1;
        if(x==2)
        {
            flag=1;
        }
        else if(x==1)
        {
            flag=0;
        }
        else if(x>1)
        {
            for(int i=2; i<x; i++)
            {
                if(x%i==0)
                {
                    flag=0;
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