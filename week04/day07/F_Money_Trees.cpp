#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<ll> v_f(n);
        vector<ll> v_h(n);
        for(int i=0; i<n; i++)
        {
            cin>>v_f[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>v_h[i];
        }

        ll sum=0;
        int l=0,r=0;
        int ans=0;

        while(r<n)
        {
            sum+=v_f[r];

            if(r>0 && v_h[r-1]%v_h[r]!=0)
            {
                sum=v_f[r];
                l=r;
            }
            while(sum>k)
            {
                sum-=v_f[l];
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
