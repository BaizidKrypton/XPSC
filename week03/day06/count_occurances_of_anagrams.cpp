#include <bits/stdc++.h>
using namespace std;

int main()
{
    string txt;
    cin>>txt;
    string pat;
    cin>>pat;

    int k=pat.size();
	int n=txt.size();
	map<char,int> mp;
	for(auto c:pat)
	{
	    mp[c]++;;
	}
	   
	int cnt=mp.size();
	int ans=0;
	   
	int l=0;
	int r=0;
	while(r<n)
	{
	    if(mp.find(txt[r])!=mp.end())
	    {
	        mp[txt[r]]--;
	        if(mp[txt[r]]==0)
	        {
	            cnt--;
	        }
	    }
	       
	    if(r-l+1==k)
	    {
	        if(cnt==0)
	        {
	            ans++;
	        }
	        if(mp.find(txt[l])!=mp.end())
	        {
	            mp[txt[l]]++;
	            if(mp[txt[l]]==1)
	            {
	                cnt++;
	            }
	        }
	        l++;
	    }
	    r++;
	}

    cout<<ans<<endl;

    return 0;
}