#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,zero=0,one=0,large=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x==0)
            {
                zero++;
            }
            if(x==1)
            {
                one=1;
            }
            if(x>1)
            {
                large=1;
            }
        }

        int non_zero=n-zero;
        if(zero>non_zero+1)
        {
            if(one==0)
            {
                cout<<"1"<<endl;
            }
            else
            {
                if(large)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    cout<<"2"<<endl;
                }
            }
        }
        else
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}