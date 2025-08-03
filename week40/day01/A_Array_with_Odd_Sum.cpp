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
        int even=0;
        int odd=0;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(odd==n && n%2==0)
        {
            cout<<"NO"<<endl;
        }
        else if(odd==n && n%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else if(odd>=1)
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