#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n-1);

    for(int i=0; i<n-1; i++)
    {
        cin>>v[i];
    }

    int a,b;
    cin>>a>>b;

    int ans=0;
    for(int i=a; i<b; i++)
    {
        ans+=(v[i-1]);
    }

    cout<<ans<<endl;

    return 0;
}