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
        vector<string> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        set<int> st[n+1];

        for(int i=1; i<=n; i++)
        {
            st[i].insert(i);
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(v[i][j]=='1')
                {
                    st[j+1].insert(i+1);
                }
            }
        }

        for(int i=1; i<=n; i++)
        {
            cout<<st[i].size()<<" ";

            for(auto val:st[i])
            {
                cout<<val<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}