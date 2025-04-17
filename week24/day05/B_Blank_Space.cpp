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

        int r=0;
        int l=0;
        int sz=0;

        while(r<n)
        {
            if(v[r]==0)
            {
                while(v[r]==0 && r<n)
                {
                    sz=max(sz,r-l+1);
                    r++;
                }
                l=r;
            }
            else
            {
                l++;
                r++;
            }
        }
        cout<<sz<<endl;
    }

    return 0;
}