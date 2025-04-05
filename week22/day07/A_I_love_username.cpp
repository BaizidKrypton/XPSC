#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int flag=0;
    int x=v[0];
    int mx=v[0];
    int mn;
    int ans=0;
    for(int i=1; i<n; i++)
    {
        if(v[i]>mx)
        {
            mx=v[i];
            ans++;
        }
        else if(v[i]<x && flag==0)
        {
            ans++;
            flag=1;
            mn=v[i];
        }
        else if(v[i]<mn && flag)
        {
            mn=v[i];
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}