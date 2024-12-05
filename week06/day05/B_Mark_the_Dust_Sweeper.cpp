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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        while(!v.empty() && v[0]==0)
        {
            v.erase(v.begin());
        }
        
        for(int val:v)
        {
            cout<<val<<" ";
        }
    }

    return 0;
}