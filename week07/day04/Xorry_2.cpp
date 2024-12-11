#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        int cnt=0;
        ll c=a;
        while(c)
        {
            cnt++;
            c=c/2;
        }
        int b=cnt-1;

        int count=0;
        int flag=0;

        for(int i=b-1; i>=0; i--)
        {
            if(a&(1<<i))
            {
                flag=1;
            }
            if(flag && !(a&(1<<i)))
            {
                count++;
            }
        }

        cout<<(ll)pow(2,count)<<endl;
    }

    return 0;
}
