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
        vector<int> v(n);
        v[0]=5;
        v[1]=2;

        for(int i=0; i<n-1; i++)
        {
            if(i+2<n)
            {
                if((v[i]+v[i+1])%2==0)
                {
                    v[i+2]=v[i]+v[i+1]+1;
                }
                else
                {
                    v[i+2]=v[i]+v[i+1];
                    v[i+2]=3*v[i+2];
                    v[i+2]++;
                }   
            } 
        }
        for(int x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}