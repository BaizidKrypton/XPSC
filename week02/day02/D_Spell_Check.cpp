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
        int cnt=0;
        int pos=s.find('T');
        if(pos>=0)
        {
            cnt++;
            s.erase(pos,1);
            pos=s.find('i');
            if(pos>=0)
            {
                cnt++;
                s.erase(pos,1);
                pos=s.find('m');
                if(pos>=0)
                {
                    cnt++;
                    s.erase(pos,1);
                    pos=s.find('u');
                    if(pos>=0)
                    {
                        cnt++;
                        s.erase(pos,1);
                        pos=s.find('r');
                        if(pos>=0)
                        {
                            cnt++;
                            s.erase(pos,1);
                        }
                    }
                }
            }
        }
        if(s.size()==0 && cnt==5)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}