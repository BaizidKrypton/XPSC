#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int,int>> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i].first>>v[i].second;
        }

        int time=v[0].first-0;
        for(int i=1; i<n; i++)
        {
            time=max(time,(v[i].first-v[i-1].second));
        }
        time=max(time,(m-v[n-1].second));

        if(time>=s)
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