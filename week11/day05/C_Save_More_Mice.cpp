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
        vector<int> v(k);
        for(int i=0; i<k; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        int c=0;
        int ans=0;
        for(int i=k-1; i>=0; i--)
        {
            int x=v[i];
            if(x<=c)
            {
                break;
            }
            int d=n-x;
            c+=d;
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
