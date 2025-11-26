#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,t;
        cin>>n>>t;

        vector<int> d(n),e(n);
        for(int i=0; i<n; i++)
        {
            cin>>d[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>e[i];
        }

        int x=-1;
        int ans=-1;
        for(int i=0; i<n; i++)
        {
            if(d[i]+i<=t)
            {
                if(e[i]>x)
                {
                    x=e[i];
                    ans=i+1;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}