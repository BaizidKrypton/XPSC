#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int a=0;
        int b=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }

        if(b<k)
        {
            cout<<"1"<<endl;
            cout<<k-b<<" "<<"B"<<endl;
        }
        else if(b>k)
        {
            cout<<"1"<<endl;
            cout<<b-k<<" "<<"A"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}