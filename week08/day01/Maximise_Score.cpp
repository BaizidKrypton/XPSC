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

        int ans=INT_MAX;
        for(int i=0; i<n; i++)
        {
            int left=INT_MIN;
            int right=INT_MIN;
            if(i>0)
            {
                left=abs(v[i]-v[i-1]);
            }
            if(i<n-1)
            {
                right=abs(v[i]-v[i+1]);
            }
            int bob=max(left,right);
            ans=min(ans,bob);
        }
        cout<<ans<<endl;
    }
    return 0;
}