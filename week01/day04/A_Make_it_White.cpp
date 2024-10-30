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
        int srt;
        int end;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                srt=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='B')
            {
                end=i;
                break;
            }
        }

        int ans=(end-srt)+1;
        cout<<ans<<endl;
    }

    return 0;
}