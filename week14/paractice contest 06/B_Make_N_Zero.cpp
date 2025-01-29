#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        while(n>0)
        {
            if(n%3==0)
            {
                n-=3;
            }
            else
            {
                n-=4;
            }
        }

        if(n==0)
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