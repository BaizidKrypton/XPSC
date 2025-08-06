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

        if(sum%2==0)
        {
            if(mp[2]%2==0)
            {
                cout<<"YES"<<endl;
            }
            else if(mp[2]%2!=0 && (mp[1]>0 && mp[1]%2==0))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}