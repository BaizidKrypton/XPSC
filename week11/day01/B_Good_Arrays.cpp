#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll sum=0;
        int one=0;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            if(v[i]==1)
            {
                one++;
            }
        }

        if(n==1)
        {
            cout<<"NO"<<endl;
        }
        else if(sum-n>=one)
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