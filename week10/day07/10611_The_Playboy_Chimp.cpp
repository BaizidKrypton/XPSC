#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;

        int i=0;
        int j=n-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(v[mid]<num)
            {
                i=mid+1;
            }
            else if(v[mid]>=num)
            {
                j=mid-1;
            }
        }
        int first;
        if(j<0)
        {
            first=-1;
        }
        else
        {
            first=v[j];
        }

        int k=0;
        int f=n-1;
        while(k<=f)
        {
            int mid=(k+f)/2;
            if(v[mid]<=num)
            {
                k=mid+1;
            }
            else if(v[mid]>num)
            {
                f=mid-1;
            }
        }
        int second;
        if(k>=n)
        {
            second=-1;
        }
        else
        {
            second=v[k];
        }

        if(first == -1)
        {
            cout<<"X";
        } 
		else 
        {
            cout<<first;
        }
        
		if(second==-1) 
        {
            cout<<"X"<<endl;
        }
		else 
        {
            cout<<" "<<second<<endl;
        }
    }

    return 0;
}
