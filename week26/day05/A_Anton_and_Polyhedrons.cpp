#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;

    int sum=0;
    while(n--)
    {
        string s;
        cin>>s;

        sum+=mp[s];
    }

    cout<<sum<<endl;

    return 0;
}