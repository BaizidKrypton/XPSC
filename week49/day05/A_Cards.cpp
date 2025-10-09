#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='n')
        {
            cout<<1<<" ";
        }
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='z')
        {
            cout<<0<<" ";
        }
    }

    return 0;
}