#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        
        sort(v.begin(),v.end());

        int ans=0;
        for(int i=2; i<=2*n; i++)
        {
            int l=0, r=n-1;
            int teams=0;

            while(l<r)
            {
                int sum=v[l]+v[r];
                if(sum==i)
                {
                    teams++;
                    l++;
                    r--;
                }
                else if(sum<i)
                {
                    l++;
                }
                else if(sum>i)
                {
                    r--;
                }
                ans=max(teams,ans);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}