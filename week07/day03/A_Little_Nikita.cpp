#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        if(n==m)
        {
            cout<<"Yes"<<endl;
        }
        else if(n<m)
        {
            cout<<"No"<<endl;
        }
        else
        {
            if(n%2==0)
            {
                if(m%2==0)
                {
                    cout<<"Yes"<<endl;
                }
                else
                {
                    cout<<"No"<<endl;
                }
            }
            else
            {
                if(m%2==0)
                {
                    cout<<"No"<<endl;
                }
                else
                {
                    cout<<"Yes"<<endl;
                }
            }
        }
    }

    return 0;
}