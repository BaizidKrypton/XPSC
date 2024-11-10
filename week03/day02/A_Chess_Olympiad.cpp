#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,z;
    float y;
    cin>>x>>y>>z;
    float cur_pt1=(x+(y/2));
    float cur_pt2=(z+(y/2));
    int remaining_match=4-(x+y+z);
    if(cur_pt1+remaining_match>cur_pt2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
