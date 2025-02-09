#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            v[i]+=(i+1);
        }
        sort(v.begin(),v.end());

        long long sum=0;
        int tel=0;
        for(int i=0; i<n; i++)
        {
            sum+=v[i];
            if(sum<=c)
            {
                tel++;
            }
            else
            {
                break;
            }
        }

        cout<<tel<<endl;
    }

    return 0;
}