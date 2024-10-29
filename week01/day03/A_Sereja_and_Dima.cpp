#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int i=0;
    int j=n-1;
    int sereja=0;
    int dima=0;
    while(i<=j)
    {
        int mx=max(v[i],v[j]);
        sereja+=mx;
        if(mx==v[i])
        {
            i++;
        }
        else
        {
            j--;
        }
        if (i <= j)
        {
            mx=max(v[i],v[j]);
            dima+=mx;
            if(mx==v[i])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        
    }
    cout<<sereja<<" "<<dima<<endl;

    return 0;
}