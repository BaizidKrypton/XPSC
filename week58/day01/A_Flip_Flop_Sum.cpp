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
        int sum=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            mp[v[i]]++;
        }

        int flag=0;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]==-1 && v[i+1]==-1)
            {
                flag=1;
                break;
            }
        }

        if(flag)
        {
            cout<<sum+4<<endl;
        }
        else if(mp[-1]==0)
        {
            cout<<sum-4<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }
    }

    return 0;
}