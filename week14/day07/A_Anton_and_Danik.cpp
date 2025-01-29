#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int a=count(s.begin(),s.end(),'A');
    int d=count(s.begin(),s.end(),'D');

    if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(d>a)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }

    return 0;
}