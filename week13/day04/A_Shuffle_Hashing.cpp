#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,h;
        cin>>s>>h;
        
        string n;
        int flag=0;
        sort(s.begin(),s.end());
        for(int i=0; i<h.size(); i++)
        {
            n=h.substr(i,s.size());
            sort(n.begin(),n.end());
            if(n==s)
            {
                flag=1;
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
    }

    return 0;
}