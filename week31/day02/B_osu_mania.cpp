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
        vector<string> v(n);

        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            v[i]=s;
        }

        vector<int> ans;
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<v[i].size(); j++)
            {
                if(v[i][j]=='#')
                {
                    ans.push_back(j+1);
                    break;
                }
            }
        }

        for(auto val:ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}