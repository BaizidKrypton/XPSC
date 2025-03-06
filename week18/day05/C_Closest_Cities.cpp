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

        vector<int> r(n);
        r[0]=0;
        r[1]=1;

        for(int i=2; i<n; i++)
        {
            if(v[i]-v[i-1]<v[i-1]-v[i-2])
            {
                r[i]=r[i-1]+1;
            }
            else
            {
                r[i]=r[i-1]+v[i]-v[i-1];
            }
        }

        vector<int> l(n);
        l[n-1]=0;
        l[n-2]=1;

        for(int i=n-3; i>=0; i--)
        {
            if(v[i+1]-v[i]<v[i+2]-v[i+1])
            {
                l[i]=l[i+1]+1;
            }
            else
            {
                l[i]=l[i+1]+v[i+1]-v[i];
            }
        }

        int m;
        cin>>m;

        while(m--)
        {
            int x,y;
            cin>>x>>y;
            x--;
            y--;

            if(x<y)
            {
                cout<<r[y]-r[x]<<endl;
            }
            else
            {
                cout<<l[y]-l[x]<<endl;
            }
        }
    }

    return 0;
}