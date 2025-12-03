#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int px,py;
        cin>>px>>py;
        string s;
        cin>>s;
        map<char,int> mp;

        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }

        int flag=0;
        if(px>=0 && py>=0)
        {
            if(mp['R']>=px && mp['U']>=py)
            {
                flag=1;
            }
        }
        else if(px<0 && py>=0)
        {
            px*=-1;
            if(mp['L']>=px && mp['U']>=py)
            {
                flag=1;
            }
        }
        else if(px>=0 && py<0)
        {
            py*=-1;
            if(mp['R']>=px && mp['D']>=py)
            {
                flag=1;
            }
        }
        else
        {
            px*=-1;
            py*=-1;
            if(mp['L']>=px && mp['D']>=py)
            {
                flag=1;
            }
        }

        if(flag)
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