#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int x=max(2*a,b);
        int y=max(2*b,a);
        int ans=min(x,y);
        cout<<ans*ans<<endl;
    }

    return 0;
}