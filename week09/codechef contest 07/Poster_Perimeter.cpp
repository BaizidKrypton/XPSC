#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;

        int peri=4;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(2*(i+j)<=k)
                {
                    peri=max(peri,2*(i+j));
                }
            }
        }

        cout<<abs(k-peri)<<endl;
    }

    return 0;
}