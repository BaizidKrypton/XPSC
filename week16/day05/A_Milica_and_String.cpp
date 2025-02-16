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

        string s;
        cin>>s;

        int a=0;
        int b=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }

        if(b<k)
        {
            int cnt=0;
            int i=0;
            int ans=0;
            while(k-b!=cnt && i<n)
            {
                ans++;
                if(s[i]=='A')
                {
                    cnt++;
                }
                i++;
            }
            cout<<"1"<<endl;
            cout<<ans<<" "<<"B"<<endl;
        }
        else if(b>k)
        {
            int cnt=0;
            int i=0;
            int ans=0;
            while(b-k!=cnt && i<n)
            {
                ans++;
                if(s[i]=='B')
                {
                    cnt++;
                }
                i++;
            }
            cout<<"1"<<endl;
            cout<<ans<<" "<<"A"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }

    return 0;
}