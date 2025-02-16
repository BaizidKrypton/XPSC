#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n,k;
    cin>>n>>k;

    for (ll i=0; i<=n; i++) 
    {
        ll total=(i*(i+1))/2;
        ll b=n-i;
        ll final=total-b;

        if (final==k) 
        {
            cout<<b<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;

    return 0;
}