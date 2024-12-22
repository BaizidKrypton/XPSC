#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;                  
    cin>>t;
    while(t--)
    {
        vector<char> v[8];
        int n=8;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                char ch;
                cin >> ch;
                v[i].push_back(ch);
            }
        }
        char c='.';
    
        for(int i=0; i<n; i++)
        {
            if(count(v[i].begin(),v[i].end(),'R')==n)
            {
                c='R';
                break;
            }
        }
 
        if(c=='.')
        {
            for(int j=n-1; j>=0; j--)
            {
                int flag=0;
                for(int i=0; i<n; i++)
                {
                    if(v[i][j]!='B')
                    {
                        flag=1;
                        break;
                    }
                }
                if(!flag)
                {
                    c='B';
                    break;
                }
            }
        }
 
        cout<<c<<endl;
    }
    return 0;
}