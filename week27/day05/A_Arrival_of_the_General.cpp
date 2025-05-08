#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    auto mn=min_element(v.begin(),v.end());
    auto mx=max_element(v.begin(),v.end());

    int mn_pos;
    int mx_pos;
    int time=0;
    
    for(int i=0; i<n; i++)
    {
        if(v[i]==*mx)
        {
            mx_pos=i;
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(v[i]==*mn)
        {
            mn_pos=i;
        }
    }
    time+=mx_pos;
    
    if(mx_pos>mn_pos)
    {
        time+=(n-1)-(mn_pos);
        time--;
    }
    else
    {
        time+=(n-1)-(mn_pos);
    }
    
    cout<<time<<endl;

    return 0;
}