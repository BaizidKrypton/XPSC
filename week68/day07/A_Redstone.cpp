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
        
        set<int> seen;
        bool found=false;
        
        for(int i=0; i<n; i++)
        {
            int gear;
            cin>>gear;
            
            if(seen.count(gear))
            {
                found=true;
            }
            
            seen.insert(gear);
        }
        
        if(found)
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