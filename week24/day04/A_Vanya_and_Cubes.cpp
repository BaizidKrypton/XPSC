#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;

    int sum=0;
    int i=1;
    while(1)
    {
        sum=(i*(i+1))/2;
        if(sum<=n)
        {
            n-=sum;
            i++;
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt<<endl;

    return 0;
}