#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int ans=INT_MAX;
    int dif=INT_MAX;
    int x;
    for(int i=0; i<n; i++)
    {
        x=3*i;
        if(abs(n-x)<dif)
        {
            ans=x;
            dif=abs(n-x);
        }
    }

    cout<<ans<<endl;

    return 0;
}