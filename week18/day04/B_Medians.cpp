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

        if(n==1)
        {
            cout<<"1"<<endl;
            cout<<"1"<<endl;
        }
        else if(k==1 || k==n)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int x=k-1;
            int y=k+1;

            if(x%2==0)
            {
                x--;
                y++;
            }

            cout<<"3"<<endl;
            cout<<"1"<<" "<<x+1<<" "<<y<<endl;
        }
    }

    return 0;
}

