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
       
        int mx=0,x=0;

        for(int i=0; i<n; i++)
        {
            mx=max(mx,v[i]);

            if(mx==v[i])
            {
                x++;
            }
        }

        cout<<n-x<<endl;
    }

    return 0;
}