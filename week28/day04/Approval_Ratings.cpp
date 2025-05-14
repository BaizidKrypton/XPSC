#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=5;
        vector<int> v(n);
        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }

        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(sum>=35)
            {
                break;
            }
            else
            {
                ans+=100;
                sum-=v[i];
                sum+=10;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}