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

        if(n%2==0)
        {
            cout<<n/2<<endl;
            int i=1;
            int j=n*3;
            while(i<=j)
            {
                cout<<i<<" "<<j<<endl;
                i+=3;
                j-=3;
            }
        }
        else
        {
            
            cout<<(n+2-1)/2<<endl;
            int i=1;
            int j=n*3;
            while(i<=j)
            {
                cout<<i<<" "<<j<<endl;
                i+=3;
                j-=3;
            }
        }
    }

    return 0;
}
