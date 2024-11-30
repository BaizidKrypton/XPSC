#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if(a<b)
        {
            int ans=a^b;
            cout<<ans<<endl;
        }
        else if(b<a)
        {
            int ans=b^a;
            cout<<ans<<endl;
        }
        else
        {
            int ans=a^a;
            cout<<ans<<endl;
        }
    }

    return 0;
}