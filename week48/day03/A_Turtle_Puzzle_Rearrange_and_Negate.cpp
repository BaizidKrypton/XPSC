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

        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]<0)
            {
                sum+=(v[i]*(-1));
            }
            else
            {
                sum+=v[i];
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}