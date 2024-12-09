#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m);
    for(int i=0; i<m; i++)
    {
        cin>>v[i];
    }

    int fedor;
    cin>>fedor;

    int cnt=0;
    for(int i=0; i<m; i++)
    {
        int tmp=v[i]^fedor;
        int cn=0;
        while(tmp>0)
        {
            cn+=(tmp & 1);
            tmp>>=1;
        }

        if(cn<=k)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
