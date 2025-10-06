#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=4;
        int mx=INT_MIN;
        int mn=INT_MAX;
        while(n--)
        {
            int x,y;
            cin>>x>>y;
            mx=max(mx,x);
            mn=min(mn,x);
        }
        int s=mx-mn;
        cout<<s*s<<endl;
    }

    return 0;
}