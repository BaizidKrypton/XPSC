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
        
        int count=0;
        long long num=1;
        
        while(num<=n)
        {
            for(int digit=1; digit<=9; digit++)
            {
                if(num*digit<=n)
                {
                    count++;
                }
            }
            num=num*10+1;
        }
        
        cout<<count<<endl;
    }

    return 0;
}