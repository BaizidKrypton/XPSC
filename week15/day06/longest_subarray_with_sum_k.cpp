#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;
    map<int,int> mp;
    mp[0]=-1;
    ll sum=0;
    int ans=0;
    int l=0,r=0;

    while(r<n)
    {
        sum+=v[r];
        if(mp.find(sum-k)!=mp.end())
        {
            ans=max(ans,r-mp[sum-k]);
        }
        if(mp.find(sum)==mp.end())
        {
            mp[sum]=r;
        }
        r++;
    }

    cout<<ans<<endl;

    return 0;
}