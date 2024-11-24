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
        map<char,int> mp;
        for(char c='a'; c<='z'; c++)
        {
            mp[c]=0;
        }

        for(int i=0; i<n; i++)
        {
            int z;
            cin>>z;
            for(auto [x,y]:mp)
            {
                if(mp[x]==z)
                {
                    cout<<x;
                    mp[x]++;
                    break;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}