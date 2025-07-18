#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<string> v(5);
    for(int i=0; i<5; i++)
    {
        cin>>v[i];
    }

    bool flag=false;
    for(int i=0; i<5; i++)
    {
        if(s[0]==v[i][0])
        {
            flag=true;
            break;
        }
        if(s[1]==v[i][1])
        {
            flag=true;
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