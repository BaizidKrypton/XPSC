#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,s;
    cin>>n>>s;
    vector<ll> v(n);
    for(int  i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int l=0;
    int r=0;
    ll sum=0;
    int ans=0;

    while(r<n)
    {
        sum+=v[r];
        if(sum<=s)
        {
            ans=max(ans,r-l+1);
        }
        else
        {
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;

    return 0;
}