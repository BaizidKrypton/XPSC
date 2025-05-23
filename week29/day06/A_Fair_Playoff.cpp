#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=4;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        
        int a=max(v[0],v[1]);
        int b=max(v[2],v[3]);

        sort(v.rbegin(),v.rend());
        if((a==v[0] || a==v[1]) && (b==v[0] || b==v[1]))
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