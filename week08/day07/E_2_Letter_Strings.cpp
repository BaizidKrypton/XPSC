#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<string,ll> mp;
        ll ans=0;

        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            string tmp=s;

            for(char c='a'; c<='z'; c++)
            {
                if(c!=s[0])
                {
                    tmp[0]=c;
                    ans+=mp[tmp];
                }
            }

            tmp=s;
            for(char c='a'; c<='z'; c++)
            {
                if(c!=s[1])
                {
                    tmp[1]=c;
                    ans+=mp[tmp];
                }
            }
            mp[s]++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
