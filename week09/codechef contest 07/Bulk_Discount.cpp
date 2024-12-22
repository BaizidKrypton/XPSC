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
        for(int i=0; i<n ;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        long long ans=v[0];
        int cnt=1;
        for(int i=1; i<n; i++)
        {
            if(v[i]-cnt<=0)
            {
                cnt++;
                continue;
            }
            else
            {
                ans+=(v[i]-cnt);
                cnt++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}