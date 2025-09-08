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
        vector<int> v(2*n);
        vector<int> ans;

        for(int i=0; i<2*n; i++)
        {
            cin>>v[i];
            auto it=find(ans.begin(),ans.end(),v[i]);
            if(it==ans.end())
            {
                ans.push_back(v[i]);
            }
        }

        for(int x:ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}