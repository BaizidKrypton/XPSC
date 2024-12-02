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
        int screen=0;

        if(y>0 && y%2==0)
        {
            screen+=(y/2);
        }
        else if(y>0 && y%2!=0)
        {
            screen+=(y/2);
            screen++;
        }
        
        int space_left=(15*screen)-(4*y);
        
        if(space_left==0)
        {
            while(x>0)
            {
                screen++;
                x-=15;
            }
            cout<<screen<<endl;
        }
        else
        {
            if(space_left>=x)
            {
                cout<<screen<<endl;
            }
            else
            {
                int left_x=x-space_left;
                while(left_x>0)
                {
                    screen++;
                    left_x-=15;
                }
                cout<<screen<<endl;
            }
        }
    }

    return 0;
}