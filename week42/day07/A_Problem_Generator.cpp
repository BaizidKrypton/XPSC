#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string a;
        cin>>a;
        map<char,int> mp;

        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        int cnt=0;

        for(char c='A'; c<='G'; c++)
        {
            if(mp[c]<m)
            {
                cnt+=(m-mp[c]);
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}