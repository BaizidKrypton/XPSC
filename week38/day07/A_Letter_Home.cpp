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

        int a=abs(s-v[0]);
        int b=abs(s-v[n-1]);
        int ans=0;

        if(s>v[n-1])
        {
            ans+=abs(s-v[0]);
            cout<<ans<<endl;
        }
        else if(s<v[0])
        {
            ans+=abs(s-v[n-1]);
            cout<<ans<<endl;
        }
        else if(a<=b)
        {
            ans+=abs(s-v[0]);
            ans+=abs(v[0]-s);
            ans+=abs(v[n-1]-s);
            cout<<ans<<endl;
        }
        else
        {
            ans+=abs(s-v[n-1]);
            ans+=abs(v[n-1]-s);
            ans+=abs(s-v[0]);
            cout<<ans<<endl;
        }
    }

    return 0;
}