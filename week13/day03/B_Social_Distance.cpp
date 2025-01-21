#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end(),greater<int>());
        int last=m-v[0];
        int flag=1;
        int cur=0;

        for(int i=0; i<n; i++)
        {
            if(i==n-1)
            {
                if(cur+v[i]>=m)
                {
                    flag=0;
                    break;
                }
            }
            else
            {
                cur+=(1+v[i]);
                if(cur>=last)
                {
                    flag=0;
                    break;
                }
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

    return 0;
}