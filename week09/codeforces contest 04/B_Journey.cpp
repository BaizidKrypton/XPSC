#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        ll n,a,b,c;
        cin>>n>>a>>b>>c;

        ll sum=a+b+c; 
    
        ll cycles=n/sum;
        ll total=cycles*sum; 
        int day=cycles*3;  

        if(total<n) 
        {
            total+=a;
            day++;
        }
        if(total<n) 
        {
            total+=b;
            day++;
        }
        if(total<n)
        {
            total+=c;
            day++;
        }

        cout<<day<<endl;
    }

    return 0;
}
