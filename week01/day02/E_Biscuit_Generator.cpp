#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    float time=t+0.5;
    int biscuit=0;
    for(int i=1; ; i++)
    {
        if(i*a<=time)
        {
            biscuit+=b;
        }
        else
        {
            break;
        }
    }
    cout<<biscuit<<endl;

    return 0;
}