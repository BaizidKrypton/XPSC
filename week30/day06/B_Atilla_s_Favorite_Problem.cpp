#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        sort(s.rbegin(),s.rend());
        int ans=s[0]-96;
        cout<<ans<<endl;
    }

    return 0;
}