#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool ans=true;
        int flag=0;
        int left,right;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='a')
            {
                flag=1;
                left=i;
                right=i;
                break;
            }
        }

        if(flag)
        {
            char c='b';
            for(int i=0; i<s.size()-1; i++)
            {
                if(left-1>=0 && s[left-1]==c)
                {
                    left--;
                    c++;
                }
                else if(right+1<s.size() && s[right+1]==c)
                {
                    right++;
                    c++;
                }
                else
                {
                    ans=false;
                    break;
                }
            }

            if(flag && ans)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}