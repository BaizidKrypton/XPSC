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

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        map<int,int> mp;

        int i=0;
        int cnt=0;
        int flag=0;
       
        while(i<v.size())
        {
            mp[v[i]]++;
            if(mp[0]>=3 && mp[1]>=1 && mp[2]>=2 && mp[3]>=1 && mp[5]>=1)
            {
                flag=1;
                break;
            }
            cnt++;
            i++;
        }

        if(flag)
        {
            cout<<cnt+1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}