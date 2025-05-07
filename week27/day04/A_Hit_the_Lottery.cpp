#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int cnt=0;
   
 
        if(n>=100)
        {
            int tmp=n/100;
            cnt+=tmp;
            n-=(tmp*100);
        }
        if(n>=20)
        {
            int tmp=n/20;
            cnt+=tmp;
            n-=(tmp*20);
        }
        if(n>=10)
        {
            int tmp=n/10;
            cnt+=tmp;
            n-=(tmp*10);
        }
        if(n>=5)
        {
            int tmp=n/5;
            cnt+=tmp;
            n-=(tmp*5);
        }
        if(n>=1)
        {
            int tmp=n/1;
            cnt+=tmp;
            n-=(tmp*1);
        }

        cout<<cnt<<endl;
    

    return 0;
}