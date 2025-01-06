#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first;
        v[i].second=i+1;
    } 

    sort(v.begin(),v.end());
    int cnt=0;
    int tmp=-1;
    for(int i=0; i<n; i++)
    {
        if(v[i].second<tmp)
        {
            cnt++;
        }
        tmp=v[i].second;
    }

    cout<<cnt+1<<endl;

    return 0;
}