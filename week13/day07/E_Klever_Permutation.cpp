#include <bits/stdc++.h>
#define ll long long
using namespace std;

 int main()
 {
    int t;
    cin>>t;
    while(t--) 
    {
        int n,k;
        cin>>n>>k;
        int s=1;
        vector<int> v(n);
        int x=1;

        for(int i=0; i<k; i++)
        {
  	        int cur=i;
  	
  	        while(cur<n)
  	        {
  		        v[cur]=s;
  		        s++;
  		        cur+=k;
  	        }

  	        if(x==0)
  	        {
  		        cur=i;
  		        int e=s-1;

  		        while(cur<n)
  		        {
  			        v[cur]=e;
  			        cur+=k;
  			        e--;
  		        }
  	        }
  	
  	        if(x==0)
            {
                x=1;
            }
            else
            {
                x=0;
            }
        }

        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
