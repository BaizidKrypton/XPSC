#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(3);

    for(int i=0; i<3; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    if((v[2]-v[0])>=10)
    {
        cout<<"check again"<<endl;
    }
    else
    {
        cout<<"final"<<" "<<v[1]<<endl;
    }

    return 0;
}