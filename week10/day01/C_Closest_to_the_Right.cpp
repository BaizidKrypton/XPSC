#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for (int i=0; i<k; ++i)
    {
        int x;
        cin>>x;
 
        auto it=lower_bound(a.begin(),a.end(),x);
        cout<<it-a.begin()+1<<endl;
    }

    return 0;
}