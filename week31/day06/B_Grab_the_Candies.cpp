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
        //vector<int> even,odd;
        int even_s=0;
        int odd_s=0;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                //even.push_back(x);
                even_s+=x;
            }
            else
            {
                //odd.push_back(x);
                odd_s+=x;
            }
        }

        // sort(even.rbegin(),even.rend());
        // sort(odd.begin(),odd.end());

        // int flag=1;
      
        // int z=max(even.size(),odd.size());
    
        
        // for(int i=0; i<z; i++)
        // {
        //     if(i<even.size())
        //     {
        //         even_s+=even[i];
        //     }
        //     if(i<odd.size())
        //     {
        //         odd_s+=odd[i];
        //     }

        //     if(even_s<=odd_s)
        //     {
        //         flag=0;
        //         break;
        //     }
        // }
    

        if(even_s>odd_s)
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