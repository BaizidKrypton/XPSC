#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        // string s="abcdefghijklmnopqrstuvwxyz";
        // string x=s.substr(0,k);

        while(n--)
        {
            int tmp=k;
            for(char c='a'; c<='z' && tmp>0; c++)
            {
                cout<<c;
                tmp--;
            }
        }
        cout<<endl;
    }

    return 0;
}