#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;  
        v.push_back(x);

    }

    double volume_j=0.00;
    for(int i=0; i<v.size(); i++)
    {
        volume_j+=(v[i]/100.00);
    }

    cout<<(volume_j/v.size())*100;

    return 0;
}