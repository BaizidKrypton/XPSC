#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }

    for(int i=0; i<n; i++)
    {
        int flag=0;
        for(int j=0; j<=i; j++)
        {
            if(v[i]==v[j] && j<i)
            {
                flag=1;
                break;
            }
        }
        if(flag)
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