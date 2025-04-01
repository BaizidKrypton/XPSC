#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string tmp;
    cin>>tmp;
    int ans=1;

    for(int i=0; i<n-1; i++)
    {
        string k;
        cin>>k;
        if(k==tmp)
        {
            tmp=k;
        }
        else
        {
            tmp=k;
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}