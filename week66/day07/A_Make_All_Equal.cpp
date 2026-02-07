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
        vector<int> v(n);
        vector<int> f(n+1);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            f[v[i]]++;
        }

        auto x=max_element(f.begin(),f.end());
        cout<<n-*x<<endl;
    }

    return 0;
}