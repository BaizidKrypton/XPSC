#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    
    int k;
    cin>>k;
    for(int i=0; i<k; ++i)
    {
        int l,r;
        cin>>l>>r;
        auto it_l=lower_bound(a.begin(),a.end(),l);
        auto it_r=upper_bound(a.begin(),a.end(),r);

        cout<<it_r-it_l<<" ";
    }
    cout<<endl;

    return 0;
}