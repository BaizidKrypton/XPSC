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
        vector<int> s(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        s=v;
        sort(s.begin(),s.end());
        int ans=0;
        
        for(int i=n-1; i>=0; i--)
        {
            if(v[i]!=s[i])
            {
                ans=s[i];
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}