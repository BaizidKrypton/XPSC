#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        int mn=min(x,y);
        if(mn<3)
        {
            cout<<mn<<endl;
        }
        else
        {
            while(mn>=3)
            {
                mn-=3;
            }
            cout<<mn<<endl;
        }
    }

    return 0;
}