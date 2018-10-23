#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl

bool check(ll mid,ll m,ll n,ll a[]){
	ll s=1,pages=0,i=0;
	while(i<n) {
	    if(pages + a[i]>mid){
	    	pages=a[i];
	    	s++;
	    	if(s>m)
		    	return 0;
	    }
	    else{
	    	pages+=a[i];
	    }
	    i++;
	}
	return 1;
}

ll bin(ll n,ll m,ll a[]){
	ll hi=0;
	for (int i = 0; i < n; ++i)
	{
		hi+=a[i];
	}
	ll lo=a[n-1],ans=a[n-1];
	while(lo<=hi){
		ll mid = (lo+hi)/2;
		if(check(mid,m,n,a)){
			ans=mid;
			hi=mid-1;
			
		}
		else{
			lo=mid+1;
		}
	}
	return ans;
}

int main()
{
	ll n,m;
	cin>>n>>m;	
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	// sort(a,a+n);
	cout<<bin(n,m,a)<<endl;
	
	return 0;
}