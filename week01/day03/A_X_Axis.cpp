#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        
        int x,y,z;

        x=abs(a[0]-a[0])+abs(a[0]-a[1])+abs(a[0]-a[2]);

        y=abs(a[1]-a[0])+abs(a[1]-a[1])+abs(a[1]-a[2]);
        
        z=abs(a[2]-a[0])+abs(a[2]-a[1])+abs(a[2]-a[2]);
        
       int min_val=min({x,y,z});
       cout<<min_val<<endl;
    }

    return 0;
}