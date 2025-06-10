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

        vector<int> x=v;
        sort(x.rbegin(),x.rend());
        int mx1=x[0];
        int mx2=x[1];

        for(int i=0; i<n; i++)
        {
            if(v[i]==mx1)
            {
                cout<<v[i]-mx2<<" ";
            }
            else
            {
                cout<<v[i]-mx1<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}