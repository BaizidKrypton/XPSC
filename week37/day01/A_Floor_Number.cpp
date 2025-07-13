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

        if(n<=2)
        {
            cout<<1<<endl;
            continue;
        }
        n-=2;
        int ans=1;
        int z=(n+x-1)/x;
        ans+=z;
        cout<<ans<<endl;
    }

    return 0;
}