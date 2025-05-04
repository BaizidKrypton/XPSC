#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;

    int cnt;

    for(int i=1; ;i++)
    {
        int tmp=k*i;
        if(tmp%10==0 || (tmp-r)%10==0)
        {
            cnt=tmp/k;
            break;
        }
    }
    cout<<cnt<<endl;

    return 0;
}