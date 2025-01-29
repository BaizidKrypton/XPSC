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

        string s,ans;
        vector<string> v;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            if(i%k==0)
            {
                for(int j=0; j<s.size(); j+=k)
                {
                    ans.push_back(s[j]);
                }
                v.push_back(ans);
                ans.clear();
            }
        }
        for(auto val:v)
        {
            cout<<val<<endl;
        }
    }

    return 0;
}
