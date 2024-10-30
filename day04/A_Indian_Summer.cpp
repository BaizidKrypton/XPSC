#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string s[n];
    int ans=n;

    for(int i=0; i<n; i++)
    {
        getline(cin,s[i]);
    }
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i]==s[j])
            {
                ans--;
                break;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}