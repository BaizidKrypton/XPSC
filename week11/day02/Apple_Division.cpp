#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll n;
	cin>>n;
	ll mn=INT_MAX;
	vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    } 

	ll total=0;
	for(int i=0; i<n; i++) 
    {
        total += v[i];
    }
    
	for(ll i=0; i<1<<n; i++)
	{
		ll sum=0;
		for(int j=0; j<n; j++)
		{
			if(i&1<<j)
            {
                sum+=v[j];
            }	
		}
		ll dif=abs((total-sum)-sum);
		mn=min(mn,dif);
	}
	cout<<mn<<endl;

    return 0;
}