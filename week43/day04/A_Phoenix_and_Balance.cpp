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

        int a=0;
        int b=0;
        for(int i=1; i<n/2; i++)
        {
            a+=pow(2,i);
        }
        a+=pow(2,n);

        for(int i=n/2; i<n; i++)
        {
            b+=pow(2,i);
        }

        cout<<abs(a-b)<<endl;
    }

    return 0;
}