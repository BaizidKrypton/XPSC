#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,k;
        cin>>m>>k;
        string s;
        cin>>s;

        int swish=count(s.begin(),s.end(),'S');
        if(swish>=k)
        {
            cout<<m<<endl;
        }
        else
        {
            int left=k-swish;
            cout<<m+(left-1)<<endl;
        }
    }

    return 0;
}