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

        int k;
        for(auto[x,y]:mp)
        {
            if(y==1)
            {
                k=x;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(v[i]==k)
            {
                cout<<i+1<<endl;
            }
        }
    }

    return 0;
}