#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int len=1;
    int cnt=1;
    for(int i=1; i<n; i++)
    {
        if(v[i]>v[i-1])
        {
            cnt++;
            len=max(len,cnt);
        }
        else
        {
            cnt=1;
        }
    }
    cout<<len<<endl;

    return 0;
}