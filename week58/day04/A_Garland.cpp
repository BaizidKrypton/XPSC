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
            cout<<-1<<endl;
        }
        else
        {
            if(mp.size()==2)
            {
                int flag=1;
                for(auto[x,y]:mp)
                {
                    if(y==3)
                    {
                        cout<<6<<endl;
                        flag=0;
                        break;
                    }
                }
                if(flag)
                {
                    cout<<4<<endl;
                }
            }
            else
            {
                cout<<4<<endl;
            }
            
        }
    }

    return 0;
}