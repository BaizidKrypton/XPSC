#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int ans1;
    int ans2;
    
    ans1=min(a,b);
    a-=ans1;
    b-=ans1;

    ans2=max(a,b);
    ans2=(ans2/2);

    cout<<ans1<<" "<<ans2;

    return 0;
}