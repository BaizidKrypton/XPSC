#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        if(is_sorted(v.begin(),v.end()))
        {
            cout<<0<<endl;
            continue;
        }

        int in_order=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==in_order+1)
            {
                in_order++;
            }
        }

        int x=n-in_order;
        cout<<ceil(x*1.0/k*1.0)<<endl;
    }

    return 0;
}
