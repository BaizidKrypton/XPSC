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

        int cnt=0;
        for(int i=n-2; i>=0; i--)
        {
            while(v[i]!=0 && v[i]>=v[i+1])
            {
                v[i]/=2;
                cnt++;
            }
            if(v[i]>=v[i+1] || v[i]==0 && i>0)
            {
                cnt=-1;
                break;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}
