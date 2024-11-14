#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>v2[i];
    }

    vector<int> s;
    for(int i=0; i<v1.size(); i++)
    {
        s.push_back(v1[i]);
    }
    for(int i=0; i<v2.size(); i++)
    {
        s.push_back(v2[i]);
    }

    sort(s.begin(),s.end());
    for(int val:s)
    {
        cout<<val<<" ";
    }


    return 0;
}