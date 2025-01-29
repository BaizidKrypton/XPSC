#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<pair<ll,int>> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back({x,i});
    }

    sort(v.begin(),v.end());
    ll tmp;

    for(int i=0; i<n-2; i++)
    {
        int left=x-v[i].first;
        int j=i+1;
        int k=n-1;

        while(j<k)
        {
            tmp=v[j].first+v[k].first;
            if(tmp==left)
            {
                cout<<v[i].second+1<<" "<<v[j].second+1<<" "<<v[k].second+1<<endl;
                return 0;
            }
            if(tmp<left)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}