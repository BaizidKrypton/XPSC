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

        int flag=1;
        for(auto[x,y]:mp)
        {
            if(y>=3)
            {
                flag=0;
                cout<<x<<" ";
                break;
            }
        }
        cout<<endl;

        if(flag)
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}