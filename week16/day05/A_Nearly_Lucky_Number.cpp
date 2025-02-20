#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<int,int> mp;
    int flag=1;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]-'0'==4 || s[i]-'0'==7)
        {
            continue;
        }
        else
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

    return 0;
}