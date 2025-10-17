#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,v;
        cin>>s>>v;
        map<char,int> mp;

        mp[s[0]]++;
        mp[s[1]]++;
        mp[v[0]]++;
        mp[v[1]]++;

        cout<<mp.size()-1<<endl;
    }

    return 0;
}