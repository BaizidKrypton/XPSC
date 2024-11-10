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
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        } 

        sort(v.begin(),v.end());
        vector<int> v1=v;
        v1.erase(v1.begin());
        v1.erase(v1.begin());
        int op1=v1[v1.size()-1]-v1[0];

        vector<int> v2=v;
        v2.pop_back();
        v2.pop_back();
        int op2=v2[v2.size()-1]-v2[0];

        vector<int> v3=v;
        v3.erase(v3.begin());
        v3.pop_back();
        int op3=v3[v3.size()-1]-v3[0];

        int ans=min(op1,op2);
        ans=min(ans,op3);
        cout<<ans<<endl;
    }

    return 0;
}
