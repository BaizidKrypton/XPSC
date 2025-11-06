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

        if(n%2050!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            long long x=n/2050;
            long long ans=0;
            while(x>0)
            {
                ans+=(x%10);
                x/=10;
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}