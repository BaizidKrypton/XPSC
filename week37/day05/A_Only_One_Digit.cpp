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

        int y=INT_MAX;
        for(int i=0; i<s.size(); i++)
        {
            int z=s[i]-'0';
            y=min(y,z);
        }

        cout<<y<<endl;
    }

    return 0;
}