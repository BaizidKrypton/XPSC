#include <bits/stdc++.h>
#define ll  long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<ll>> v(n,vector<ll>(m));

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>v[i][j];
            }
        }

        ll mx=INT_MIN;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                ll sum=0;
                sum+=v[i][j];
                int tmp_i=i-1;
                int tmp_j=j-1;
                while(tmp_i>=0 && tmp_j>=0)
                {
                    sum+=v[tmp_i][tmp_j];
                    tmp_i--;
                    tmp_j--;
                }

                tmp_i=i-1;
                tmp_j=j+1;
                while(tmp_i>=0 && tmp_j<m)
                {
                    sum+=v[tmp_i][tmp_j];
                    tmp_i--;
                    tmp_j++;
                }

                tmp_i=i+1;
                tmp_j=j-1;
                while(tmp_i<n && tmp_j>=0)
                {
                    sum+=v[tmp_i][tmp_j];
                    tmp_i++;
                    tmp_j--;
                }

                tmp_i=i+1;
                tmp_j=j+1;
                while(tmp_i<n && tmp_j<m)
                {
                    sum+=v[tmp_i][tmp_j];
                    tmp_i++;
                    tmp_j++;
                }

                mx=max(mx,sum);
            }
        }
        cout<<mx<<endl;
    }

    return 0;
}