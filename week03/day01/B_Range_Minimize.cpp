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
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        } 

        sort(v.begin(),v.end());
        int sz=v.size();
        int loop;
        if(sz%2==0)
        {
            loop=sz/2;
        }
        else
        {
            loop=(sz/2)+1;
        }
        int min_range;
        int idx=0;
        for(int i=1; i<=loop; i++)
        {
            int mn=v[n-i]-v[idx];
            min_range=min(min_range,mn);
            idx++;
        }
        cout<<min_range<<endl;
    }

    return 0;
}