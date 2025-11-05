#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        if(n%2==0)
        {
            if(n%(k-1)==0)
            {
                cout<<n/(k-1)<<endl;
            }
            else
            {
                cout<<(n/(k-1))+1<<endl;
            }
        }
        else
        {
            n-=k;
            if(n==0)
            {
                cout<<1<<endl;
            }
            else
            {
                if(n<k-1)
                {
                    cout<<2<<endl;
                }
                else if(n%(k-1)==0)
                {
                    cout<<(n/(k-1))+1<<endl;
                }
                else
                {
                    cout<<(n/(k-1))+2<<endl;
                }
            }
        }
    }

    return 0;
}