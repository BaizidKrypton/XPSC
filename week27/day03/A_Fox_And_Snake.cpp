#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int x=1;
    int flag=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i%2!=0)
            {
                cout<<"#";
            }
            else
            {
                if(x==1 && j==m && flag)
                {
                    cout<<"#";
                    x=0;
                    flag=0;
                }
                else if(x==0 && j==1 && flag)
                {
                    cout<<"#";
                    x=1;
                    flag=0;
                }
                else
                {
                    cout<<".";
                }
            }
        }
        cout<<endl;
        flag=1;
    }

    return 0;
}