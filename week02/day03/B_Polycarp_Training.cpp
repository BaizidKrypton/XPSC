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

    sort(v.begin(),v.end());
    
    int cnt=0;
    int day=1;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>=day)
        {
            cnt++;
            day++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}