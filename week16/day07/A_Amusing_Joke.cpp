#include <bits/stdc++.h>
using namespace std;

int main()
{
    string g,h,p;
    cin>>g>>h>>p;
    map<char,int> mp1,mp2;

    for(int i=0; i<g.size(); i++)
    {
        mp1[g[i]]++;
    }
    for(int i=0; i<h.size(); i++)
    {
        mp1[h[i]]++;
    }

    for(int i=0; i<p.size(); i++)
    {
        mp2[p[i]]++;
    }

    int flag=1;
    if(mp1.size()==mp2.size())
    {
        for(auto[x,y]:mp1)
        {
            if(y!=mp2[x])
            {
                flag=0;
                break;
            }
        }
    }
    else
    {
        flag=0;
    }

    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}