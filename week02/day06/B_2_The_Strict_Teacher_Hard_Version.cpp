#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,q;
        cin>>n>>m>>q;
        vector<int> v;
        for(int i=0; i<m; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());

        while(q--)
        {
            int x;
            cin>>x;
            if(x<v[0])
            {
                cout<<v[0]-1<<endl;
            }
            else if(x>v[m-1])
            {
                cout<<n-v[m-1]<<endl;
            }
            else
            {
                auto it=lower_bound(v.begin(),v.end(),x);
                auto it1=it;
                it1--;

                int left=*it1;
                int right=*it;
                int mid=(right+left)/2;
                cout<<min(abs(mid-left),abs(mid-right))<<endl;
            }
        }
    }

    return 0;
}