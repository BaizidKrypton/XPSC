#include <bits/stdc++.h>
using namespace std;

bool vowel(char c)
{
    string x="aeiou";
    for(int i=0; i<5; i++)
    {
        if(c==x[i])
        {
            return 1;
        }
    }
    return 0;
}

bool consonant(char c)
{
    string x="aeiou";
    for(int i=0; i<5; i++)
    {
        if(c==x[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s,t;
    cin>>s>>t;

    if(s.size()!=t.size())
    {
        cout<<"No"<<endl;
        return 0;
    }

    for(int i=0; i<s.size(); i++)
    {
        if(vowel(s[i]) && vowel(t[i]))
        {
            continue;
        }
        else if(consonant(s[i]) && consonant(t[i]))
        {
            continue;
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;

    return 0;
}