#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(s.find("2026")!=string::npos)
        {
            cout<<0<<endl;
        }
        else if(s.find("2025")!=string::npos)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}