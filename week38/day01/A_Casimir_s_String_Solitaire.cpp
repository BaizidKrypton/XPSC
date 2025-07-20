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

        if(mp['B']==(mp['A']+mp['C']))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}