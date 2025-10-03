#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    string x="";
    
    for(int i=0; i<s.size(); i++)
    {
        x.push_back(s[i]);

        if(x.back()=='.' && x.size()==1)
        {
            cout<<0;
            x.pop_back();
        }
        else if(x.back()=='.' && x.size()==2)
        {
            cout<<1;
            x.pop_back();
            x.pop_back();
        }
        else if(x.back()=='-' && x.size()==2)
        {
            cout<<2;
            x.pop_back();
            x.pop_back();
        }
    }

    return 0;
}