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
        int zero=1;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                zero=0;
            }
        }
        int flag=0;

        for(int i=0; i<n-1; i++)
        {
            if(v[i]==0 && v[i+1]==0)
            {
                flag=1;
                break;
            }
        }

        if(zero || flag)
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