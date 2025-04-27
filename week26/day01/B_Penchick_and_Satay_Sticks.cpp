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

        for(int i=0; i<n; i++)
        {
            if(v[i]==i+1)
            {
                continue;
            }
            else if(i<n-1 && v[i]==i+2 && v[i+1]==i+1)
            {
                swap(v[i],v[i+1]);
            }
        }

        if(is_sorted(v.begin(),v.end()))
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