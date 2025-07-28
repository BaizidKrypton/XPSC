#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int crime=0;
    int police=0;
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            if(police==0)
            {
                cnt++;
            }
            else
            {
                police--;
            }
        }
        else
        {
            police+=x;
        }
    }

    cout<<cnt<<endl;

    return 0;
}