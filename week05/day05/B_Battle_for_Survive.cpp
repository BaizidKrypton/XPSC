#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> v;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            if(i<n-2)
            {
                sum+=x;
            }
        }
        
        ll i=v[n-2]-sum;
        cout<<v[n-1]-i<<endl;
    }

    return 0;
}
