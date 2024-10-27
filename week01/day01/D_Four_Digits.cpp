#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=s.size();
    if(len<4)
    {
        int zeros=4-len;
        for(int i=1; i<=zeros; i++)
        {
            s="0"+s;
        }
        cout<<s<<endl;
    }
    else
    {
        cout<<s<<endl;
    }

    return 0;
}