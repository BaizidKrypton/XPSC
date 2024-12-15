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

        int mx_bit=0;
        while((1<<mx_bit)<=n)
        {
            mx_bit++;
        }

        int b=(1<<mx_bit-1);
        int a=b^n;

        cout<<a<<" "<<b<<endl;
    }

    return 0;
}