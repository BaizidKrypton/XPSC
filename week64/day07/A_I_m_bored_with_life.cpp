#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int mn=min(a,b);
    int ans=1;

    for(int i=1; i<=mn; i++)
    {
        ans*=i;
    }

    cout<<ans<<endl;

    return 0;
}