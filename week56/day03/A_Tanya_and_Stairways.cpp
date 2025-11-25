#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int cnt=1;
    vector<int> ans;

    for(int i=1; i<n; i++)
    {
        if(v[i]==1)
        {
            cnt++;
            ans.push_back(v[i-1]);
        }
    }
    cout<<cnt<<endl;
    ans.push_back(v[n-1]);

    for(int x:ans)
    {
        cout<<x<<" ";
    }

    return 0;
}