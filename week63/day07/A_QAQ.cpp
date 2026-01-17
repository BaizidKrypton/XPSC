#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int count=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]!='A')
        {
            continue;
        }

        int left_Q= 0,right_Q= 0;

        for(int j=0; j<i; j++)
        {
            if(s[j]=='Q')
            {
                left_Q++;
            }
        }
        
        for(int j=i+1; j<n; j++)
        {
            if(s[j]=='Q')
            {
                right_Q++;
            }
        }
        
        count+=(left_Q*right_Q);
    } 
    cout << count << endl;

    return 0;
}