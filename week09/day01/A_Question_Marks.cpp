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

        int frq[4]={0};
        for(auto x:s)
        {
            if(x!='?')
            {
                frq[x-'A']++;
            }
        }
        int ans=0;
        for(int i=0; i<4; i++)
        {
            ans+=min(n,frq[i]);
        }

        cout<<ans<<endl;
    }

    return 0;
}
