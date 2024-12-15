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
        string s;
        cin>>s;
        
        int one=0;
        int zero=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }

        int go=0;
        for(int i=0; i<n; i++)
        {
            if(go==0)
            {
                if(zero>0 && one>0)
                {
                    zero--;
                    one--;
                    go=1;
                }
                else
                {
                    cout<<"Ramos"<<endl;
                    break;
                }
            }
            else if(go==1)
            {
                if(zero>0 && one>0)
                {
                    one--;
                    zero--;
                    go=0;
                }
                else
                {
                    cout<<"Zlatan"<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}