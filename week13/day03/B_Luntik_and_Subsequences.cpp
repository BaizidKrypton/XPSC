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
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int one=0;
        int zero=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                zero++;
            }
            else if(v[i]==1)
            {
                one++;
            }
        }

        ll ans=one*pow(2,zero);
        cout<<ans<<endl;
    }

    return 0;
}