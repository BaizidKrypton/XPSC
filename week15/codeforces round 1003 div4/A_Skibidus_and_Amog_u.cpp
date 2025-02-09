#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;

        int x=w.size()-1;
        
        if(x==1)
        {
            cout<<"i"<<endl;
        }
        else
        {
            w.pop_back();
            w.pop_back();
            cout<<w+"i"<<endl;
        }

    }

    return 0;
}