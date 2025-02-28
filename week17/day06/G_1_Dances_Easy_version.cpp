#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> v1(n);
        vector<ll> v2(n);

        v1[0]=m;

        for(int i=1; i<n; i++)
        {
            cin>>v1[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>v2[i];
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        int i=2;
        int j=0;
        int ans=0;

        while(i<n)
        {
            if(v1[j]<v2[i])
            {
                i++;
                j++;
            }
            else
            {
                while(i<n && v1[j]>=v2[i])
                {
                    ans++;
                    i++;
                }
                i++;
                j++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}