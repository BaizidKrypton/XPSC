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
        sort(v.begin(),v.end());

        int l,r;
        if((v[0]+v[n-1])%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=1; i<n; i++)
            {
                if(v[0]%2 != v[i]%2)
                {
                    l=i;
                    break;
                }
            }
            for(int i=1; i<n; i++)
            {
                if(v[n-1]%2 != v[n-i-1] % 2)
                {
                    r=i;
                    break;
                }
            }
            cout<<min(l,r)<<endl;
        }
    }

    return 0;
}