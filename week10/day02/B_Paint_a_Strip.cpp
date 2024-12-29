#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        int sum=1,ans=0;
        while(sum<n)
        {
            ans++;
            sum++;
            sum*=2;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}