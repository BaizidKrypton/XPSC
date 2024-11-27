#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s=1;
        int k=n*n;

        vector<vector<int>> v(n,vector<int>(n));
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                for(int j=0; j<n; j++)
                {
                    if(j%2==0)
                    {
                        v[i][j]=s;
                        s++;
                    }
                    else
                    {
                        v[i][j]=k;
                        k--;
                    }
                }
            }
            else
            {
                for(int j=n-1; j>=0; j--)
                {
                    if(j%2==0)
                    {
                        v[i][j]=k;
                        k--;
                    }
                    else
                    {
                        v[i][j]=s;
                        s++;
                    }
                }
            }
        }

        for(auto x:v)
        {
            for(int y:x)
            {
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
