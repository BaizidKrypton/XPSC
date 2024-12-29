#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a,int b)
{
    return __gcd(a,b);
}

int lcm(int a,int b)
{
    return (a/gcd(a,b))*b;
}

int main()
{
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    ll red=n/a;
    ll blue=n/b;

    ll ans=(red*p)+(blue*q);
    ll overlap=n/lcm(a,b);
    ans-=overlap*(p+q);
    ans+=overlap*max(p,q);

    cout<<ans<<endl;

    return 0;
}