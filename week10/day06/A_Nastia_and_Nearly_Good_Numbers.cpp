#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;

        if(b==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            ll x=a;
            ll y=a*b-a;
            ll z=a*b;
            if(x==y)
            {
                cout<<x<<" "<<2*z-x<<" "<<2*z<<endl;
            }
            else
            {
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
        }
    }

    return 0;
}