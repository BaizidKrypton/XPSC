#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        v[i]=a[i]-b[i];
    }

    

    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]<=0)
        {
            continue;
        }

        auto it=upper_bound(v.begin(),v.end(),-v[i])-v.begin();
        cnt+=(i-it);
    }

    cout<<cnt<<endl;
 
    return 0;
}