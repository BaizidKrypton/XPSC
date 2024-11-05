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
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }

        vector<char> v;
        int del=k;
        for(auto[x,y]:mp)
        {
            if(del)
            {
                if(mp[x]%2!=0)
                {
                    mp[x]--;
                    del--;
                }
            }
        }

        int sz=n-k;
        if(sz%2==0)
        {
            int flag=1;
            for(auto[x,y]:mp)
            {
                if(mp[x]%2!=0)
                {
                    flag=0;
                    break;
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
        else
        {
            int cnt=0;
            for(auto[x,y]:mp)
            {
                if(mp[x]%2!=0)
                {
                    cnt++;
                }
            }
            if(cnt>1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}