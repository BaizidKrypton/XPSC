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
        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        for(int i=0; i<n-1; i++)
        {
            if(v[i]<k)
            {
                k-=v[i];
                v[n-1]+=v[i];
                v[i]=0;
            }
            else
            {
                v[i]-=k;
                v[n-1]+=k;
                k=0;
            }
        }
        
        for(int x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}