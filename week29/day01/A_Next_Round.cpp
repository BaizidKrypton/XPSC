#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int x=v[k-1];

    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]>0 && v[i]>=x)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}