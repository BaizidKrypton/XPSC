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
        vector<vector<int>> v(n, vector<int>(n - 1));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin>>v[i][j];
            }
        }

        for(auto val:v)
        {
            for(int vv:val)
            {
                cout<<vv<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}