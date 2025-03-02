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
        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int sum=0;
        int cnt=0;

        for(int i=0; i<n; i++)
        {
            if(v[i]>=k)
            {
                sum+=v[i];
            }
            else if(v[i]==0)
            {
                if(sum>0)
                {
                    cnt++;
                    sum--;
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}