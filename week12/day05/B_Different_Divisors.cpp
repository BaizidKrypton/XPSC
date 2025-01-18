#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll prime(ll x)
{
    for(int i=x; ;i++)
    {
        bool flag=true;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            return i;
        }
    }
    return 0; 
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll d;
        cin>>d;

        ll a=prime(1+d);
        ll b=prime(a+d);

        cout<<min(a*b,a*a*a)<<endl;
    }

    return 0;
}
