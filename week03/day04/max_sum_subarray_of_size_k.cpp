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
    int k;
    cin>>k;

    int l=0;
    int r=0;
    long long int ans=0;
    long long int sum=0;
        
    while(r<n)
    {
        sum+=v[r];
            
        if(r-l+1==k)
        {
            ans=max(ans,sum);
            sum-=v[l];
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }

    cout<<ans;

    return 0;
}
