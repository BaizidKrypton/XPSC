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
        int sz=0;

        for(int i=1; i+1<s.size(); i++)
        {
            if(s[i]=='(')
            {
                sz++;
            }
            else
            {
                sz--;
            }

            if(sz<0)
            {
                sz=1;
                break;
            }
        }

        if(sz==1)
        {
            cout<<"YES"<<endl;
        }
        else if(sz==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}