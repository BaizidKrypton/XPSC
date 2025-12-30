#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string> v(3);

        for(int i=0; i<3; i++)
        {
            string s;
            cin>>s;
            v[i]=s;
        }

        int a=0,b=0,c=0;
        int flag=1;
        for(int i=0; i<3; i++)
        {
            if(flag)
            {
                a=0,b=0,c=0;
                for(int j=0; j<3; j++)
                {
                    if(v[i][j]=='A')
                    {
                        a=1;
                    }
                    else if(v[i][j]=='B')
                    {
                        b=1;
                    }
                    else if(v[i][j]=='C')
                    {
                        c=1;
                    }

                    if(v[i][j]=='?')
                    {
                        flag=0;
                    }
                }
            }
        }

        if(a==0)
        {
            cout<<'A'<<endl;
        }
        else if(b==0)
        {
            cout<<'B'<<endl;
        }
        else
        {
            cout<<'C'<<endl;
        }
    }

    return 0;
}