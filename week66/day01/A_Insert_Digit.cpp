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
        int d;
        cin>>d;
        string s;
        cin>>s;
        bool flag=false;
        
        for(int i=0; i<n; i++)
        {
            int digit=s[i]-'0';
            
            if(!flag && d>digit)
            {
                cout<<d;
                flag=true;
            }
            cout<<s[i];
        }
        
        if(!flag)
        {
            cout<<d;
        }
        cout<<endl;
    }
    
    return 0;
}