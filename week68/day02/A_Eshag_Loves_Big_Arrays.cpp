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
        int mn=INT_MAX;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mn=min(mn,v[i]);
        }

        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]!=mn)
            {
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}