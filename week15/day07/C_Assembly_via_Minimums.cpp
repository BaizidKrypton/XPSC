#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int b_n=(n*(n-1))/2;
        vector<int> v(b_n);
        for(int i=0; i<b_n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        int idx=0;
        for(int i=1; i<n; i++)
        {
            cout<<v[idx]<<" ";
            idx+=(n-i);
        }
        cout<<1000000000<<endl;
    }

    return 0;
}