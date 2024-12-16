#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,num;
        cin>>n;
        int flag=0;
        int first=-1;
        int last=-1;
        
        while(n--)
        {
            cin>>num;
            if(flag)
            {
                if(num>=last && num<=first)
                {
                    last=num;
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            }
            else
            {
                if(first==-1)
                {
                    first=num;
                    last=num;
                    cout<<"1";
                }
                else if(num>=last)
                {
                    last=num;
                    cout<<"1";
                }
                else if(first>=num)
                {
                    last=num;
                    flag=1;
                    cout<<"1";
                }
                else
               {
                    cout<<"0";
               }
            }
        }
        cout<<endl;
    }

    return 0;
}
