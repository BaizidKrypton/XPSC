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
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int x=INT_MAX;
        int y=0;
        for(int i=0; i<n; i++)
        {
            x&=v[i];
            y|=v[i];
        }
        cout<<y-x<<endl;
    }

    return 0;
}