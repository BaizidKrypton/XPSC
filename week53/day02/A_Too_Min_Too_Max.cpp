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

        int i=0,j=n-1,k=i+1,l=j-1;
        int ans=abs(v[i]-v[j])+abs(v[j]-v[k])+abs(v[k]-v[l])+abs(v[l]-v[i]);

        cout<<ans<<endl;
    }

    return 0;
}