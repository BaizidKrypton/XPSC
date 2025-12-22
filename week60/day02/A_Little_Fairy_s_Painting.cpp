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
        set<int> s;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }

        int ans=s.size();
        for(int val:s)
        {
            if(val>=ans)
            {
                ans=val;
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}