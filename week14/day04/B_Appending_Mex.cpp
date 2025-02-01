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

    int flag=1;
    int mx=v[0];

    for(int i=0; i<n; i++)
    {
        if(v[i]>(mx+1) || v[i]>i)
        {
            cout<<i+1;
            flag=0;
            break;
        }
        if(v[i]>mx)
        {
            mx=v[i];
        }
    }



    return 0;
}