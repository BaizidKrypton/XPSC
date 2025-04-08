#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s="EASY";
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            s="HARD";
            break;
        }
    }

    cout<<s<<endl;

    return 0;
}