#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            long long x;
            cin>>x;
            cout<<n+1-x<<' ';
        }
        cout<<endl;
    }

    return 0;
}