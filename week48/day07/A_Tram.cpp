#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int cnt=0;

    while(n--)
    {
        int x,y;
        cin>>x>>y;
        cnt-=x;
        cnt+=y;
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;

    return 0;
}