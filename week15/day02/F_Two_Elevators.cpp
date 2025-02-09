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

        int cnt_a=0;
        int cnt_b=0;
        
        cnt_a+=abs(a-1);
        cnt_b+=abs(b-c);
        cnt_b+=abs(c-1);
        
        if(cnt_a>cnt_b)
        {
            cout<<"2"<<endl;
        }
        else if(cnt_a<cnt_b)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"3"<<endl;
        }
    }

    return 0;
}