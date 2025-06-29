#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string v;
    cin>>v;

    int ans=0;
    for(int i=0; i<n; i++)
    {
        int x=(abs((s[i]-'0')-(v[i]-'0')));
        int y=min(x,10-x);
        
        ans+=(min(x,y));
    }
    cout<<ans<<endl;

    return 0;
}