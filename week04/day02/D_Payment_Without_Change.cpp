#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        ll sum=0;
        int cnt_a=s/n;

        if(cnt_a>=a)
        {
            sum=a*n;
        }
        else
        {
            sum=cnt_a*n;
        }

        if(sum+b>=s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}