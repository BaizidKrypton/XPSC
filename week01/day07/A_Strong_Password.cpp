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

        if(s.size()==1)
        {
            char c=s[0];
            if(c!='z')
            {
                c++;
                s+=c;
            }
            else
            {
                c--;
                s+=c;
            }
            cout<<s<<endl;
        }
        else
        {
            int flag=0;
            int pos;
            char c;
            char c1;
            for(int i=0; i<s.size()-1; i++)
            {   
                c=s[i];
                c1=s[i+1];
                if(s[i]==s[i+1])
                {
                    flag=1;
                    pos=i+1;
                    break;
                }
            }
            if(flag)
            {
                if(c!='z')
                {
                    c++;
                    s.insert(pos,1,c);
                }
                else
                {
                    c--;
                    s.insert(pos,1,c);
                }
                cout<<s<<endl;
            }
            else
            {
                if(c1!='z')
                {
                    c1++;
                    s.push_back(c1);
                    cout<<s<<endl;
                }
                else
                {
                    c1--;
                    s.push_back(c1);
                    cout<<s<<endl;
                }
            }
        }
    }

    return 0;
}