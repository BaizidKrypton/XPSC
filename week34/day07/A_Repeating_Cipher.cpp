#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    string x="";
    x+=s[0];
    int j=1;
    for(int i=1; i<n; i++)
    {
        x+=s[i];
        i+=j;
        j++;
    }

    cout<<x<<endl;

    return 0;
}