#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> v;

        for(int i=0; i<x; i++)
        {
            v.push_back(i);
        }
        for(int i=x+1; i<n; i++)
        {
            v.push_back(i);
        }

        if(x<n)
        {
            v.push_back(x);
        }

        for(int val:v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}