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
        vector<int> a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int cnt=0;
        int i=0;

        while(i<=n-k)
        {
            bool flag=true;

            for(int j=i; j<i+k; j++)
            {
                if(a[j]==1)
                {
                    flag=false;
                    break;
                }
            }

            if(flag)
            {
                cnt++;
                i+=k+1;
            }
            else
            {
                i++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}
