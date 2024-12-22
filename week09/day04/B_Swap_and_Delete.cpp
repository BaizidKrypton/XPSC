#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        int n=s.size();
        vector<int> v={0,0};

        for(int i=0; i<n; i++)
        {
            v[s[i]-'0']++;
        }

        for(int i=0; i<n; i++)
        {
            if(v[!(s[i]-'0')]>0)
            {
                v[!(s[i]-'0')]--;
            }
            else
            {
                ans=n-i;
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}