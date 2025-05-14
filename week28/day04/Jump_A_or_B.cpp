#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        
        int flag=0;
        
        if(a==b) 
        {
            if(n*b==m)
            {
                flag=1;
            }
        }
        else
        {
            int x=m-a*n;
            int y=b-a;
            if(x%y==0)
            {
                int z=x/y;
                if(z>=0 && z<=n)
                {
                    flag=true;
                }
            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}