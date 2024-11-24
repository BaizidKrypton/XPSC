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
        for(char i='A'; i<='Z'; i++)
        {
            mp[i]=2;
        }
        
        int cnt=0;
        char c='A';
        string ans;
        if(n>1 && n%2==0)
        {
            for(auto [x,y]:mp)
            {
                while(mp[x]!=0)
                {
                    ans+=x;
                    cnt++;
                    mp[x]--;
                    if(cnt==n)
                    {
                        cout<<"YES"<<endl;
                        cout<<ans<<endl;
                    }
                }
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}