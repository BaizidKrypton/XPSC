#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s="codeforces";
        string v;
        cin>>v;

        int cnt=0;
        for(int i=0; i<10; i++)
        {
            if(s[i]!=v[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}