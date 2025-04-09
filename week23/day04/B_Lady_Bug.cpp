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
        string a,b;
        cin>>a>>b;

        int a_even=0,a_odd=0;
        int b_even=0,b_odd=0;

        for(int i=0; i<n; i+=2)
        {
            if(a[i]=='1')
            {
                a_even++;
            }
            if(b[i]=='0')
            {
                b_even++;
            }
        }
        for(int i=1; i<n; i+=2)
        {
            if(a[i]=='1')
            {
                a_odd++;
            }
            if(b[i]=='0')
            {
                b_odd++;
            }
        }

        int flag=1;
        if(a_even>b_odd)
        {
            flag=0;
        }
        if(a_odd>b_even)
        {
            flag=0;
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