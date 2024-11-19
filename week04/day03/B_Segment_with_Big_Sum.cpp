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
    int ans=INT_MAX;
    int flag=0;

    while(r<n)
    {
        sum+=v[r];
        while(sum>=s)
        {
            ans=min(ans,r-l+1);
            flag=1;
            sum-=v[l];
            l++;
        }
        r++;
    }
    if(flag)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    

    return 0;
}