#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v(3);
        int n;
        for(int i=0; i<3; i++)
        {
            cin>>v[i];
        }
        cin>>n;

        sort(v.begin(),v.end());
        n-=2*v[2]-v[1]-v[0];

        if(n<0 || n%3!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}