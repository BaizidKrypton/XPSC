#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        map<int,int> mp;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        if(mp[1]==1)
        {
            if(x>=1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            continue;
        }

        int first=-1,last=1;

        for(int i=0; i<n; i++)
        {
            if(v[i]==1 && first==-1)
            {
                first=i+1;
            }
            else if(v[i]==1)
            {
                last=i+1;
            }
        }

        int z=abs(last-first);
        z++;

        if(x>=z)
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