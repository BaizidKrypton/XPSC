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
        int one=0,zero=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }

        cout<<min(one,zero)<<endl;
    }

    return 0;
}