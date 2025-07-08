#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v(3);
        for(int i=0; i<3; i++)
        {
            cin>>v[i];
        }

        sort(v.rbegin(),v.rend());
        if((v[0]+v[1])>=10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
