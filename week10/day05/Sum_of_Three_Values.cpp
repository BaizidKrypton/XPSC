#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int flag=0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(v[i]+v[j]+v[k]==x)
                {
                    cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                    flag=1;
                    break;
                }
            }
        }
    }

    if(flag==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }

    return 0;
}