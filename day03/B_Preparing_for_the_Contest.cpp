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
        int x=n-k;
        for(int i=x; i>=1; i--)
        {
            cout<<i<<" ";
        }
        for(int i=x+1; i<=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}