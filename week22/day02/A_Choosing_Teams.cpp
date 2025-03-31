#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(5-x>=k)
        {
            v.push_back(x);
        }
    }

    cout<<v.size()/3<<endl;

    return 0;
}