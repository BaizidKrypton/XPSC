#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int x=n-1;
        int ans=x*k;
        ans++;

        cout<<ans<<endl;
    }

    return 0;
}