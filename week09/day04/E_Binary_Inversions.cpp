#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        ll ans=INT_MIN;
        ll ans1=0;
        ll one1=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                one1++;
            }
            else
            {
                ans1+=one1;
            }
        }
        ans=max(ans,ans1);

        int idx=-1;
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
                idx=i;
                break;
            }
        }

        ll ans2=0;
        ll one2=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                one2++;
            }
            else
            {
                ans2+=one2;
            }
        }
        ans=max(ans,ans2);

        if(idx!=-1)
        {
            v[idx]=0;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(v[i]==1)
            {
                v[i]=0;
                break;
            }
        }
        ll ans3=0;
        ll one3=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                one3++;
            }
            else
            {
                ans3+=one3;
            }
        }
        ans=max(ans,ans3);

        cout<<ans<<endl;
    }

    return 0;
}