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
            cout<<-1<<endl;
        }
        else
        {
            if(n%2==0)
            {
                for(int i=0; i<n; i++)
                {
                    if(i<n/2)
                    {
                        cout<<1<<" ";
                    }
                    else
                    {
                        cout<<-1<<" ";
                    }
                }
                cout<<endl;
            }
            else
            {
                for(int i=0; i<n-3; i++)
                {
                    if(i<(n-3)/2)
                    {
                        cout<<1<<" ";
                    }
                    else
                    {
                        cout<<-1<<" ";
                    }
                }
                cout<<1<<" "<<2<<" "<<-3<<endl;
            }
        }
    }

    return 0;
}