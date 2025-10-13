#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int cnt=0;
    int r=2*n;
    int g=5*n;
    int b=8*n;

    if(r%k==0)
    {
        cnt+=r/k;
    }
    else
    {
        cnt+=(r/k)+1;
    }

    if(g%k==0)
    {
        cnt+=g/k;
    }
    else
    {
        cnt+=(g/k)+1;
    }

    if(b%k==0)
    {
        cnt+=b/k;
    }
    else
    {
        cnt+=(b/k)+1;
    }
    cout<<cnt<<endl;

    return 0;
}