#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> mp;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }

        int flag=1;
        for(auto [x,y]:mp)
        {
            if(y>1)
            {
                flag=0;
                break;
            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}