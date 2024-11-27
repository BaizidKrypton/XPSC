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

        if(s.front()<s.back())
        {
            cout<<s<<endl;
        }
        else if(s.back()<s.front())
        {
            string v=s;
            reverse(s.begin(),s.end());
            string c=s+v;
            cout<<c<<endl;
        }
        else
        {
            string v=s;
            reverse(s.begin(),s.end());
            if(s<v)
            {
                string c=s+v;
                cout<<c<<endl;
            }
            else
            {
                cout<<v<<endl;
            }
        }
    }

    return 0;
}