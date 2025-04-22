#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;

        int ans=n-n%x+y;
        if(ans<=n)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<n-n%x-(x-y)<<endl;
        }
    }

    return 0;
}