#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v(5,vector<int>(5));

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>v[i][j];
        }
    }

    int x,y;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(v[i][j]==1)
            {
                x=i+1;
                y=j+1;
                break;
            }
        }
    }
    cout<<abs(3-x)+abs(3-y)<<endl;

    return 0;
}