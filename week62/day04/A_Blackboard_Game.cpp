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
        vector<int> v(4);

        for(int i=0; i<n; i++)
        {
            v[i%4]++;
        }

        if(v[0]==v[3] && v[1]==v[2])
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
    }

    return 0;
}
