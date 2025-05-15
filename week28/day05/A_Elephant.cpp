#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;

    int step=0;

    int tmp;
    tmp=x/5;
    step+=tmp;
    x-=tmp*5;
    tmp=x/4;
    x-=tmp*4;
    step+=tmp;
    tmp=x/3;
    step+=tmp;
    x-=tmp*3;
    tmp=x/2;
    step+=tmp;
    x-=tmp*2;
    tmp=x/1;
    step+=tmp;
    x-=tmp*1;
    
    cout<<step;

    return 0;
}