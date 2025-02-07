#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int> mp;

    int p;
    cin>>p;
    vector<int> x(p);

    for(int i=0; i<p; i++)
    {
        cin>>x[i];
        mp[x[i]]++;
    }

    int q;
    cin>>q;
    vector<int> y(q);

    for(int i=0; i<q; i++)
    {
        cin>>y[i];
        mp[y[i]]++;
    }
    
    if(mp.size()==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }

    return 0;
}