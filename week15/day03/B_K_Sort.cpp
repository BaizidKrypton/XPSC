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

        int ans=0;
        int dif=0;

        for(int i=1; i<n; i++)
        {
            if(v[i]<v[i-1])
            {
                ans+=v[i-1]-v[i];
                dif=max(dif,v[i-1]-v[i]);
                v[i]=v[i-1];
            }
        }
        ans+=dif;
        cout<<ans<<endl;
    }

    return 0;
}