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

        int sz=mp.size();
        if(sz==1)
        {
            cout<<"0"<<endl;
        }
        else if(sz==3)
        {
            if(mp['L'] && mp['R'])
            {
                cout<<"2"<<endl;
                cout<<"LR"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
                cout<<"UD"<<endl;
            }
        }
        else if(sz==2)
        {
            if(mp['L'] && mp['R'])
            {
                cout<<"2"<<endl;
                cout<<"LR"<<endl;
            }
            else if(mp['U'] && mp['D'])
            {
                cout<<"2"<<endl;
                cout<<"UD"<<endl;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
        else
        {
            int mn1=INT_MAX;
            int mn2=INT_MAX;
            for(auto[x,y]:mp)
            {
                if(x=='L' || x=='R')
                {
                    mn1=min(mn1,y);
                }
                else if(x=='U' || x=='D')
                {
                    mn2=min(mn2,y);
                }
            }
            cout<<mn1*2+mn2*2<<endl;
            
            for(int i=0; i<mn1; i++)
            {
                cout<<"R";
            }
            for(int i=0; i<mn2; i++)
            {
                cout<<"U";
            }
            for(int i=0; i<mn1; i++)
            {
                cout<<"L";
            }
            for(int i=0; i<mn2; i++)
            {
                cout<<"D";
            }
            cout<<endl;
        }
    }

    return 0;
}
