#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        int sum=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }

        cout<<max(0,(sum-m))<<endl;
    }

    return 0;
}