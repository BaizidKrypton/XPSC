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

        int ans=(v[n-1]-v[0]);
        if(ans==0)
        {
            cout<<0<<endl;
        }
        else
        {
            ans--;
            cout<<ans<<endl;
        }
    }

    return 0;
}