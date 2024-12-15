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

        ll ans=0;
        for(int i=30; i>=0; i--)
        {
            ll cnt=0;
            for(int j=0; j<n; j++)
            {
                if(v[j]>=pow(2,i) && v[j]<pow(2,(i+1)))
                {
                    cnt++;
                }
            }
            ans+=(cnt*(cnt-1))/2;
        }
        cout<<ans<<endl;
    }

    return 0;
}