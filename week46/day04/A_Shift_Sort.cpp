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

        int zero=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
        }

        int cnt=0;
        for(int i=0; i<zero; i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
        }
        cout<<zero-cnt<<endl;
    }

    return 0;
}