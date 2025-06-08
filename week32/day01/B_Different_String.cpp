#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int> mp;

        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }

        if(mp.size()==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        string r=s;
        reverse(r.begin(),r.end());
        if(r!=s)
        {
            cout<<"YES"<<endl;
            cout<<r<<endl;
        }
        else
        {
            sort(r.begin(),r.end());
            cout<<"YES"<<endl;
            cout<<r<<endl;
        }
    }

    return 0;
}