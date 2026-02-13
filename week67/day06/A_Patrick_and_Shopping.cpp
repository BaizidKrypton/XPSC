#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1,d2,d3;
    cin>>d1>>d2>>d3;

    int ans=INT_MAX;
    ans=min(ans,(d1+d3+d2));
    ans=min(ans,(d1+d3+d3+d1));
    ans=min(ans,(d2+d2+d1+d1));
    ans=min(ans,(d2+d3+d3+d2));

    cout<<ans<<endl;

    return 0;
}