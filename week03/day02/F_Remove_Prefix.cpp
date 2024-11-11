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

        reverse(v.begin(),v.end());
        set<int> s;
        int ans=n;
        for(int i=0; i<n; i++)
        {
            if(s.find(v[i])!=s.end())
            {
                break;
            }
            s.insert(v[i]);
            ans--;
        }
        cout<<ans<<endl;
    }

    return 0;
}