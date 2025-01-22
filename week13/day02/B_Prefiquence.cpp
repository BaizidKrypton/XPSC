#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;

        int i=0;
        int j=0;
        int cnt=0;
        while(i<n && j<m)
        {
            if(a[i]==b[j])
            {
                cnt++;
                j++;
                i++;
            }
            else
            {
                j++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}