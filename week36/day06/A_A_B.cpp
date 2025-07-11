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
        int sum=0;

        int x=s[0]-'0';
        int y=s[2]-'0';
        sum=x+y;
        cout<<sum<<endl;
    }

    return 0;
}