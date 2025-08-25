#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        float h=(a+b)/2.0;
        int x=min(a,b);
        int cnt=0;

        while(1)
        {
            if(x>=h)
            {
                break;
            }
            if(x<h)
            {
                x+=c;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}