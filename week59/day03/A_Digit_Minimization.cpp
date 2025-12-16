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

        if(s.size()==2)
        {
            cout<<s[s.size()-1]<<endl;
        }
        else
        {
            sort(s.begin(),s.end());
            cout<<s[0]<<endl;
        }
    }

    return 0;
}