#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int x=-1,y=-1;
        for(int i=l; i<=r; i*=2)
        {
            if(i*2<=r)
            {
                x=i;
                y=i*2;
                break;
            }
        }

        cout<<x<<" "<<y<<endl;
    }

    return 0;
}