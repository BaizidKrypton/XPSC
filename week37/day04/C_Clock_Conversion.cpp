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

        string f,l;
        f+=s[0];
        f+=s[1];
        l+=s[3];
        l+=s[4];

        int x=stoi(f);

        if(x<12)
        {
            if(x==00)
            {
                cout<<"12:"<<l<<" "<<"AM"<<endl;
            }
            else
            {
                cout<<f<<":"<<l<<" "<<"AM"<<endl;
            }
        }
        else
        {
            if(x==12)
            {
                cout<<x<<":"<<l<<" "<<"PM"<<endl;
            }
            else
            {
                if(x<22)
                {
                    x-=12;
                    cout<<0<<x<<":"<<l<<" "<<"PM"<<endl;
                }
                else
                {
                    x-=12;
                    cout<<x<<":"<<l<<" "<<"PM"<<endl;
                }
            }
        }
    }

    return 0;
}