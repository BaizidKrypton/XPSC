#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        
        while(k--)
        {
            int gcd=__gcd(x,y);
            if(x>y)
            {
                x=gcd;
            }
            else
            {
                y=gcd;
            }
            int lcm=(x/gcd)*y;
            if(x>y)
            {
                x=lcm;
            }
            else
            {
                y=lcm;
            }
        }
        cout<<x+y<<endl;
    }

    return 0;
}