#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x;

    for(int i=n+1; i<=m; i++)
    {
        vector<int> v;
        for(int j=1; j<=m; j++)
        {
            if(i%j==0)
            {
                v.push_back(1);
            }
        }
        if(v.size()==2)
        {
            x=i;
            break;
        }
        else
        {
            v.clear();
        }
    }

    if(x==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}