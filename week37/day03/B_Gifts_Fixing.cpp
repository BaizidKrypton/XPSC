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
        vector<int> a(n),b(n);
        int a_min=INT_MAX;
        int b_min=INT_MAX;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            a_min=min(a_min,a[i]);
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            b_min=min(b_min,b[i]);
        }

        long long int cnt=0;
        for(int i=0; i<n; i++)
        {
            int x=a[i]-a_min;
            int y=b[i]-b_min;
            cnt+=max(x,y);
        }
        cout<<cnt<<endl;
    }

    return 0;
}