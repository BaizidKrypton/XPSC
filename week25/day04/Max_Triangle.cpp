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

        if(n<=3)
        {
            cout<<-1<<endl;
        }
        else
        {
            int ans=n+n-1+n-2;
            cout<<ans<<endl;
        }
    }

    return 0;
}