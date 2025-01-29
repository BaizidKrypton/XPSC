#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll sum=0;
    map<ll,int> mp;
    mp[0]++;
    ll cnt=0;

    for(int i=0; i<n; i++)
    {
        sum+=v[i]%n;
        sum=(sum+n)%n;
        cnt+=mp[sum];
        mp[sum]++;
    }
    cout<<cnt<<endl;

    return 0;
}