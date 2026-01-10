#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int count=0;
    for(int i=0; i*i<=n; i++)
    {
        int b=n-i*i;
        if(b<0)
        {
            continue;
        }

        if (i+b*b==m)
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}