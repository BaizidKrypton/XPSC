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

        if(mp[2]%2!=0)
        {
            cout<<-1<<endl;
        }
        else if(mp[2]==0)
        {
            cout<<1<<endl;
        }
        else
        {
            int x=mp[2]/2;
            int ans;
            for(int i=0; i<n; i++)
            {
                if(v[i]==2 && x)
                {
                    x--;
                    ans=i;
                }
            }
            cout<<ans+1<<endl;
        }
    }

    return 0;
}