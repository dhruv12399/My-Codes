#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl

bool check(ll mid,ll c,ll n,ll a[]){
	ll cnt=1;
	ll lst = a[0];
	for (int i = 1; i < n; ++i)
	{
		if(a[i]-lst>=mid){
			// debug(lst);
			// debug(a[i]);
			lst=a[i];
			// debug(cnt);////
			cnt++;
			if(cnt==c)
				return 1;
		}
	}
	return 0;
}

ll bin(ll n,ll c,ll a[]){
	ll lo=0,hi=1000000000000,ans=0;
	while(lo<=hi){
		ll mid = (lo+hi)/2;
		if(check(mid,c,n,a)){
			
			ans=mid;
			lo=mid+1;
		}
		else{
			hi=mid-1;
		}
	}
	return ans;
}

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n,c;
		cin>>n>>c;
		ll a[n];
		
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<bin(n,c,a)<<endl;
	}
	
	return 0;
}