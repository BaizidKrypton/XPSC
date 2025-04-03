#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=0;
    int c=0;

    for(int i=0; i<n; i++)
    {
        int m_p,c_p;
        cin>>m_p>>c_p;
        if(m_p>c_p)
        {
            m++;
        }
        else if(c_p>m_p)
        {
            c++;
        }
    }

    if(m>c)
    {
        cout<<"Mishka"<<endl;
    }
    else if(c>m)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }

    return 0;
}