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

        int new_price;
        for(int i=0; i<=9; i++)
        {
            if(pow(10,i)<=n)
            {
                new_price=pow(10,i);
            }
            else
            {
                break;
            }
        }

        cout<<n-new_price<<endl;
    }

    return 0;
}