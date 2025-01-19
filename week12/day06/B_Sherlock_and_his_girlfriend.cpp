#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n==1)
    {
        return false;
    }
    else
    {
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
   

    int n;
    cin>>n;
    vector<int> ans;

    for(int i=2; i<=n+1; i++)
    {
        if(prime(i))
        {
            ans.push_back(1);
        }
        else
        {
            ans.push_back(2);
        }
    }

    if(n<3)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
    }
    for(int val:ans)
    {
        cout<<val<<" ";
    }

    return 0;
}