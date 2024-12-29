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
    
    for (ll i=0; i<k; ++i)
    {
        ll x;
        cin>>x;
 
        ll l=0, r=n-1, mid;
        bool flag=0;
        while(l<=r)
        {
            mid=l+(r-l)/2;
 
            if(a[mid]==x)
            {
                flag=1;
                break;
            }
            else if(a[mid]<x)
            {
                l=mid+1;
            }   
            else
            {
                r=mid-1;
            }    
        }
        if (flag)
        {
            cout<<"YES"<<endl;
        }  
        else
        {
            cout<<"NO"<<endl;
        }
            
    }

    return 0;
}