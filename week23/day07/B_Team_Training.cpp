#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());

        int cnt=0;
        int mn=INT_MAX;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            cnt++;
            mn=(mn,v[i]);

            if(cnt*mn>=x)
            {
                cnt=0;
                mn=INT_MAX;
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}