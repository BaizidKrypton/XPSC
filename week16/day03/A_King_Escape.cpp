#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> q(2),k(2),t(2);
    vector<char> kreg(2),treg(2);

    cin>>q[0];
    cin>>q[1];
    cin>>k[0];
    cin>>k[1];
    cin>>t[0];
    cin>>t[1];

    if(k[0]>q[0])
    {
        kreg[0]='r';
    }
    else
    {
        kreg[0]='l';
    }

    if(k[1]>q[1])
    {
        kreg[1]='u';
    }
    else
    {
        kreg[1]='d';
    }

    if(t[0]>q[0])
    {
        treg[0]='r';
    }
    else
    {
        treg[0]='l';
    }

    if(t[1]>q[1])
    {
        treg[1]='u';
    }
    else
    {
        treg[1]='d';
    }

    if((kreg[0]==treg[0]) && (kreg[1]==treg[1]))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
 
    return 0;
}