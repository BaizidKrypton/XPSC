#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l,r;
        int flag=0;

        for(int i=0; i<n-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                flag=1;
                l=i+1;
                r=l+1;
                break;
            }
        }

        if(flag)
        {
            cout<<l<<" "<<r<<endl;
        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }
    }

    return 0;
}