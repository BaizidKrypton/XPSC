#include <bits/stdc++.h>
using namespace std;

int sum(int a)
{
    int p=0;
    while(a>0)
    {
        p+=(a%10);
        a/=10;
    }
    return p;
}

int main()
{
    int n;
    cin>>n;

    while(sum(n)%4!=0)
    {
        n++;
    }
    cout<<n<<endl;

    return 0;
}