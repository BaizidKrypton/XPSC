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
        char c=s[0];
        string a="";

        for(int i=0; i<n; i++)
        {
            char c=s[i];
            i++;
            while(c!=s[i] && i<n)
            {
                i++;
            }
            a+=c;
        }
        cout<<a<<endl;
    }

    return 0;
}