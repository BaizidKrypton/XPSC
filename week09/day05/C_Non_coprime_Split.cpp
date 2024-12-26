#include <bits/stdc++.h>
using namespace std;

int div(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;

        if(l<=3 && r<=3)
        {
            cout<<"-1"<<endl;
        }
        else if(r>l)
        {
            if(r%2!=0)
            {
                r--;
            }
            cout<<r/2<<" "<<r/2<<endl;
        }
        else
        {
            if(div(l)==l)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<div(l)<<" "<<l-div(l)<<endl;
            }
        }
    }

    return 0;
}
