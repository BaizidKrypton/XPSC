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
        int minus=0;
        int zero=0;

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]<0)
            {
                minus++;
            }
            else if(v[i]==0)
            {
                zero++;
            }
        }

        int ans=0;
        if(minus%2!=0)
        {
            ans+=2;
        }
        ans+=zero;
        cout<<ans<<endl;
    }

    return 0;
}