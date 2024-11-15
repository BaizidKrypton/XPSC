#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int r=0;
        ll sum=0;
        int op=0;
        bool segment=false;
        while(r<=n)
        {
            if(r<n)
            {
                sum+=abs(v[r]);
            } 
            
            if(segment)
            {
                if(v[r]>0 || r==n)
                {
                    op++;
                    segment=false;
                }
            }
            else
            {
                if(v[r]<0)
                {
                    segment=true;   
                }
            }
            r++;
        }
        cout<<sum<<" "<<op<<endl;
    }

    return 0;
}