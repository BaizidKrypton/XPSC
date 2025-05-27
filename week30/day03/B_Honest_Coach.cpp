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
        sort(v.rbegin(),v.rend());

        int ans=INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            ans=min((v[i]-v[i+1]),ans);
        }
        cout<<ans<<endl;
    }

    return 0;
}