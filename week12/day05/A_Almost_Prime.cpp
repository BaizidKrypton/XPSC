#include <bits/stdc++.h>
using namespace std;

bool prime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

bool fun(int n)
{
    vector<int> v;
    int cnt=0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if((n/i)!=i)
            {
                v.push_back(n/i);
            }
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        if(prime(v[i]))
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(fun(i))
        {
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
