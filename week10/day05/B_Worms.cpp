#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(1000005);
    int idx=1;

    for(int i=1; i<=n; i++)
    {
        int w;
        cin>>w;
        while(w--)
        {
            v[idx]=i;
            idx++;
        }
    }

    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<v[x]<<endl;
    }

    return 0;
}