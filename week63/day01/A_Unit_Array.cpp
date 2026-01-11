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

        int neg=0, pos=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x==-1)
            {
                neg++;
            }
            else
            {
                pos++;
            }  
        }

        int operations=0;

        if(pos<neg)
        {
            int need=(neg-pos+1)/2;
            operations+=need;
            neg-=need;
            pos+=need;
        }

        if(neg%2!=0)
        {
            operations++;
        }

        cout<<operations<< endl;
    }
    
    return 0;
}
