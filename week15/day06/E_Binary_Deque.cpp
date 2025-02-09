#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int l=0,r=0;
        int ans=-1;
        int sum=0;

        while(r<n)
        {
            sum+=v[r];
            if(sum==s)
            {
                ans=max(ans,r-l+1);
            }
            else
            {
                while(sum>s && l<=r)
                {
                    sum-=v[l];
                    l++;
                }
            }
            r++;
        }
        if(ans<0)
        {
            cout<<ans<<endl;
        }
        else
        {
            ans=n-ans;
            cout<<ans<<endl;
        }
    }

    return 0;
}