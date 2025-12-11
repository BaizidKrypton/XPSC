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

    int i=0,j=n-1,ans=0;
    while(i<=j)
    {
        if(v[i]<=k)
        {
            i++;
            ans++;
        }
        else if(v[j]<=k)
        {
            j--;
            ans++;
        }
        else
        {
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}