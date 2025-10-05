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

        for(int i=n; i>=1; i--)
        {
            v.push_back(i);
        }

        if(n%2!=0)
        {
            int x=n/2;
            int y=x+1;
            swap(v[x],v[y]);
        }

        for(int val:v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}