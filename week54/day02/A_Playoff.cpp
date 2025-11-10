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
        
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            long long ans=pow(2,n)-1;
            cout<<ans<<endl;
        }
    }

    return 0;
}