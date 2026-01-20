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

        if(mp[0]==0)
        {
            cout<<"NO"<<endl;
        }
        else if(mp[1]>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(mp[0]==1)
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