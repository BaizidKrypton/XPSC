#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> mp;
    int ans=1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
        if(v[i]!=1)
        {
            ans=max(ans,mp[v[i]]);
        }
    }

    if(n==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            for(int j=2; j*j<=v[i]; j++)
            {
                if(v[i]%j==0)
                {
                    mp[j]++;
                    ans=max(ans,mp[j]);
                    if(v[i]/j!=j)
                    {
                        mp[v[i]/j]++;
                        ans=max(ans,mp[v[i]/j]);
                    }
                }
            }
        }
        cout<<ans;
    }

    return 0;
}