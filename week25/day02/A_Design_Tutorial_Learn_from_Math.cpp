#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
        return false; 
    if (n==2)
        return true;
    if (n%2==0)
        return false;

    for (int i=3; i*i<=n; i+=2) 
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin>>n;

    int a=(n+1)/2;
    int b=n/2;
    while(isPrime(a) || isPrime(b))
    {
        a--;
        b++;
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}