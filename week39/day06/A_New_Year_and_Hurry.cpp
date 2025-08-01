#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int cnt=0;
    int time=k;
    int x;
    for(int i=1; i<=n; i++)
    {
        time+=(i*5);
        if(time<=240)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}