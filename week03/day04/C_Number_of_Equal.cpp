#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>v2[i];
    }

    int l=0;
    int r=0;
    long long int ans=0;
    while(l<n && r<m)
    {
        int cur=v1[l];
        int cnt1=0;
        int cnt2=0;

        while(l<n && v1[l]==cur)
        {
            cnt1++;
            l++;
        }
        while(r<m && cur>v2[r])
        {
            r++;
        }
        while(r<m && v2[r]==cur)
        {
            cnt2++;
            r++;
        }
        ans+=(1ll*cnt1*cnt2);
    }
    cout<<ans<<endl;

    return 0;
}