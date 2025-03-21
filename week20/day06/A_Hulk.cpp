#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s="";

    if(n%2==1)
    {
        for(int i=1; i<n; i++)
        {
            if(i%2==1)
            {
                s+="I hate that ";
            }
            else
            {
                s+="I love that ";
            }
        }
        s+="I hate it";
        cout<<s<<endl;
    }
    else
    {
        
        for(int i=1; i<n; i++)
        {
            if(i%2==1)
            {
                s+="I hate that ";
            }
            else
            {
                s+="I love that ";
            }
        }
        s+="I love it ";
        cout<<s<<endl;
    }

    return 0;
}