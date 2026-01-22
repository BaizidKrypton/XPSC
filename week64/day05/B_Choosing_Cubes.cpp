#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        vector<int> v(n);
        map<int,int> mp;
        int flag1=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        int fav=v[f-1];
        sort(v.rbegin(),v.rend());
        for(int i=0; i<k; i++)
        {
            if(v[i]==fav)
            {
                flag1=1;
                break;
            }
        }

        int flag=0;
        for(int i=k; i<n; i++)
        {
            if((v[i]==fav && mp[fav]>1) && flag1)
            {
                flag=1;
                break;
            }
            else if(v[i]==fav)
            {
                flag=2;
                break;
            }
            else
            {
                continue;
            }
        }

        if(flag==1)
        {
            cout<<"MAYBE"<<endl;
        }
        else if(flag==2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}