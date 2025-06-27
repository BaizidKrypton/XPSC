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

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string v="";

        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                v+=s[i];
            }
            else
            {
                if(s[i]!=v.back())
                {
                    v+=s[i];
                }
            }
        }

        if(v=="meow")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}