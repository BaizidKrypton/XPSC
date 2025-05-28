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

        bool found=false;

        for(auto[value, count]:mp)
        {
            if(count%2==1)
            {
                found=true;
                break;
            }
        }

        if(found)
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
