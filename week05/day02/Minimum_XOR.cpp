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
        int XOR=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            XOR^=v[i];
        }
        
        int ans=XOR;
        for(int i=0; i<n; i++)
        {
            int cur=(XOR^v[i]);
            ans=min(ans,cur);
        }
        cout<<ans<<endl;
    }

    return 0;
}
