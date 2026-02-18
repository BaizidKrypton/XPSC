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
        vector<pair<int,int>> a(n);

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a[i].first=x;
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a[i].second=x;
        }

        sort(a.begin(),a.end());
        int ram=k;

        for(int i=0; i<n; i++)
        {
            if(a[i].first<=ram)
            {
                ram+=a[i].second;
            }
            else
            {
                break;
            }
        }
        cout<<ram<<endl;
    }

    return 0;
}