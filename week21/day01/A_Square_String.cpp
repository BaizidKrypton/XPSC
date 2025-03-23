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

        if(s.size()%2==0)
        {
            string x=s.substr(0,s.size()/2);
            string y=s.substr(s.size()/2,s.size()/2);

            if(x==y)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}