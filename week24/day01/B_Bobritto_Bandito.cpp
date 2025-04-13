#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;

        int ll=0,rr=0;

        int tmp=m;
        while(tmp>0 && ll>l)
        {
            ll--;
            tmp--;
        }

        while(tmp>0 && rr<r)
        {
            rr++;
            tmp--;
        }
        

        cout<<ll<<" "<<rr<<endl;
    }

    return 0;
}