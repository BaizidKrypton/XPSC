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

        if(s.size()>2)
        {
            string v="";
            v+=s[0];
            v+=s[1];
            int x=stoi(v);
            string z="";
            z+=s[2];
            int a=stoi(z);

            if(x==10 && a!=0)
            {
                string f="";
                for(int i=2; i<s.size(); i++)
                {
                    f+=s[i];
                }
                int y=stoi(f);

                if(y>=2)
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
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}