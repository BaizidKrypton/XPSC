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
        long long sum=0;

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }

        long long root=sqrt(sum);

        if(root*root==sum)
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