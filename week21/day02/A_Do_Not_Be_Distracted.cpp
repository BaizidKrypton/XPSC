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
        vector<char> v;
        v.push_back(s[0]);
        bool flag=true;

        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
            {
                continue;
            }
            else
            {
                auto it=find(v.begin(),v.end(),s[i]);
                if(it!=v.end())
                {
                    flag=false;
                    break;
                }
                v.push_back(s[i]);
            }
        }

        if(flag)
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