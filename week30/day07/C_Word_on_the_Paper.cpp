#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string> v;
        for(int i=0; i<8; i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }

        string ans="";
        for(auto x:v)
        {
            for(auto y:x)
            {
                if(y!='.')
                {
                    ans+=y;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}