#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;

    if(n%2==0)
    {
        ll odd=(n/2)*(n/2);
        ll even=(n/2)*((n/2)+1);
        cout<<even-odd;
    }
    else
    {
        ll x=(n/2)+1;
        ll y=n/2;
        ll odd=x*x;
        ll even=y*(y+1);
        cout<<-1*(odd-even);
    }

    return 0;
}