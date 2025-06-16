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
        vector<int> v(n);
        map<int,int> mp;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        if(mp.size()>2)
        {
            cout<<"NO"<<endl;
        }
        else if(mp.size()==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int flag=0;
            int z=n/2;
            for(auto[x,y]:mp)
            {
                if(y==z)
                {
                    flag=1;
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
    }

    return 0;
}