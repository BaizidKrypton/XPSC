#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        sort(v.begin(),v.end());

        int l=-1,r=-1;
        int a=-1,b;
        for(int i=0; i<n; i++)
        {
            if(mp[v[i]]<k)
            {
                continue;
            }
            if(a==-1)
            {
                a=v[i];
            }
            if(i==n-1 || v[i+1]-v[i]>1 || mp[v[i+1]]<k)
            {
                b=v[i];
                if(b-a>=r-l)
                {
                    l=a;
                    r=b;
                }
                a=-1;
                b=-1;
            }
        }
        
        if(l==-1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<l<<" "<<r<<endl;
        }
    }

    return 0;
}