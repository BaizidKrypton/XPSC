#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;

        string s;
        s+=a[0];
        s+=b[0];
        s+=c[0];
        cout<<s<<endl;
    }

    return 0;
}