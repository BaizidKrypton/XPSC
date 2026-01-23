#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(k);

        for(int i=0; i<k; i++)
        {
            cin>>v[i];
        }

        auto x=max_element(v.begin(),v.end());
        cout<<2*(n-*x)-k+1<<endl;
    }

    return 0;
}