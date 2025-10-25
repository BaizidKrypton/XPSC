#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int> mp;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[x]=i+1;
    }

    if(mp.size()>=k)
    {
        cout<<"YES"<<endl;
        for(auto[x,y]:mp)
        {
            if(k>0)
            {
                cout<<y<<" ";
                k--;
            }
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}