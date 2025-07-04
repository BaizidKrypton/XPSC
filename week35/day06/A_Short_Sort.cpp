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

        bool flag=false;
        string tmp=s;
        if(tmp=="abc")
        {
            flag=true;
        }
        swap(tmp[0],tmp[1]);
        if(tmp=="abc")
        {
            flag=true;
        }
        tmp=s;
        swap(tmp[1],tmp[2]);
        if(tmp=="abc")
        {
            flag=true;
        }
        tmp=s;
        swap(tmp[0],tmp[2]);
        if(tmp=="abc")
        {
            flag=true;
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