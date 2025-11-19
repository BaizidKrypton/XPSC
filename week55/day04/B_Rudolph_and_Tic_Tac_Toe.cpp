#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>s1>>s2>>s3;

        char c='a';
        for(int i=0; i<3; i++)
        {
            if(s1[i]=='.')
            {
                s1[i]=c;
                c++;
            }
            if(s2[i]=='.')
            {
                s2[i]=c;
                c++;
            }
            if(s3[i]=='.')
            {
                s3[i]=c;
                c++;
            }
        }

        if((s1[0]==s1[1])&&(s1[0]==s1[2]))
        {
            cout<<s1[0]<<endl;
        }
        else if((s2[0]==s2[1])&&(s2[0]==s2[2]))
        {
            cout<<s2[0]<<endl;
        }
        else if((s3[0]==s3[1])&&(s3[0]==s3[2]))
        {
            cout<<s3[0]<<endl;
        }
        else if((s1[0]==s2[0])&&(s1[0]==s3[0]))
        {
            cout<<s1[0]<<endl;
        }
        else if((s1[1]==s2[1])&&(s1[1]==s3[1]))
        {
            cout<<s1[1]<<endl;
        }
        else if((s1[2]==s2[2])&&(s1[2]==s3[2]))
        {
            cout<<s1[2]<<endl;
        }
        else if((s1[0]==s2[1])&&(s1[0]==s3[2]))
        {
            cout<<s1[0]<<endl;
        }
        else if((s1[2]==s2[1])&&(s1[2]==s3[0]))
        {
            cout<<s1[2]<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }
    }

    return 0;
}