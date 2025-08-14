#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;

        if(n%2==0)
        {
            int x=n*a;
            int y=(n/2)*b;
            cout<<min(x,y)<<endl;
        }
        else
        {
            int x=(n*a);
            int y=((n/2)*b)+a;
            cout<<min(x,y)<<endl;
        }
    }

    return 0;
}