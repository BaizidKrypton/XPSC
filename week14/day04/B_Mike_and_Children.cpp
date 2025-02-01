#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mp;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int mx=INT_MIN;
 
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            mp[v[i]+v[j]]++;
            mx=max(mx,mp[v[i]+v[j]]);
        }
    }
    cout<<mx<<endl;
 
    return 0;
}