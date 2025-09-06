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
            sum+=v[i];
        }

        if(sum>n)
        {
            cout<<sum-n<<endl;
        }
        else if(sum<n)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}