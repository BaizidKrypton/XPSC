#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int n=2*abs(a-b);

        int ans1=c+(n/2);
        int ans2=c-(n/2);

        if(a>n || b>n || c>n)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(ans1<=n && n>2)
            {
                cout<<ans1<<endl;
            }
            else if(ans2<=n && n>2)
            {
                cout<<ans2<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }

    return 0;
}