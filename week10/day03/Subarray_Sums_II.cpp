#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,x;
    cin>>n>>x;
    map<ll,ll> mp;
    ll sum=0;
    ll cnt=0;
    mp[sum]=1;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
        cnt+=mp[sum-x];
        mp[sum]++;
    }
    cout<<cnt<<endl;

    return 0;
}
