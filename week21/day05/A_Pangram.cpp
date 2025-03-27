#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp;

    for(int i=0; i<n; i++)
    {
        s[i]=tolower(s[i]);
        mp[s[i]]++;
    }

    if(mp.size()==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}