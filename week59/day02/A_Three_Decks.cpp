#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int sum=a+b+c;
        if(sum%3!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if((sum/3)<a || (sum/3)<b)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }

    return 0;
}