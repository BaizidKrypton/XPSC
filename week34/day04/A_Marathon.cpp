#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v(4);
        for(int i=0; i<4; i++)
        {
            cin>>v[i];
        }

        int cnt=0;
        for(int i=1; i<4; i++)
        {
            if(v[i]>v[0])
            {
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}