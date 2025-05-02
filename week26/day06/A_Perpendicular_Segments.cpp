#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;

        int ax,ay,bx,by,cx,cy,dx,dy;

        ax=0;
        bx=min(x,y);
        ay=0;
        by=min(x,y);
        cx=min(x,y);
        cy=0;
        dy=min(x,y);
        dx=0;

        cout<<ax<<" "<<ay<<" "<<bx<<" "<<by<<endl;
        cout<<cx<<" "<<cy<<" "<<dx<<" "<<dy<<endl;
    }

    return 0;
}