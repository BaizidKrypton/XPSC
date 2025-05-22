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
        vector<int> a(n),b(n);

        int sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        for(int x:a)
        {
            sum+=x;
        }

        for(int i=0; i<k; i++)
        {
            int tmp=sum;
            sum-=a[i];
            sum+=b[i];
            sum=max(tmp,sum);
        }
        cout<<sum<<endl;
    }

    return 0;
}