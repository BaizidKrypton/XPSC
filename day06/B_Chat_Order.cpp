#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> v;
    
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }

    map<string,bool> mp;

    for(int i=n-1; i>=0; i--)
    {
        string cur=v[i];
        if(mp[cur]==false)
        {
            cout<<cur<<endl;
            mp[cur]=true;
        }
    }

    return 0;
}