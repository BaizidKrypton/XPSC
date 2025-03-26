#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ans=0;
    vector<int> v(d,0);
 
    for(int i=k-1; i<d; i+=k)
    {
        if(v[i]==0)
        {
            v[i]=1;
        }
    }
    for(int i=l-1; i<d; i+=l)
    {
        if(v[i]==0)
        {
            v[i]=1;
        }
    }
    for(int i=m-1; i<d; i+=m)
    {
        if(v[i]==0)
        {
            v[i]=1;
        }
    }
    for(int i=n-1; i<d; i+=n)
    {
        if(v[i]==0)
        {
            v[i]=1;
        }
    }

    for(int i=0; i<d; i++)
    {
        ans+=v[i];
    }

    cout<<ans<<endl;

    return 0;
}