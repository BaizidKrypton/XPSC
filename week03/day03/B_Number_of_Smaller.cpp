#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v1;
    vector<int> v2;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    

    int cnt=0;
    int l=0;
    int j=0;
    while(j<m)
    {
        if((l<n) && (v1[l]<v2[j]))
        {
            cnt++;
            l++;
        }
        else
        {
            cout<<cnt<<" ";
            j++;
        }
    }

    return 0;
}