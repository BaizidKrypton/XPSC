#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<k; ++i)
    {
        ll x;
        cin>>x;
        auto it=upper_bound(a.begin(),a.end(),x);
        cout<<it-a.begin()<<endl;
    }

    return 0;
}