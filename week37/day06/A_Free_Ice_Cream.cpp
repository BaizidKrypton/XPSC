#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;

    int kid=0;
    long long ice=x;

    while(n--)
    {
        char c;
        int num;
        cin>>c>>num;

        if(c=='+')
        {
            ice+=num;
        }
        else
        {
            if(ice>=num)
            {
                ice-=num;
            }
            else
            {
                kid++;
            }
        }
    }

    cout<<ice<<" "<<kid<<endl;

    return 0;
}