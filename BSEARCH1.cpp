#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl

ll bsearch(ll a[], ll n,ll size){
	ll lo=0, hi=size, ans=-1;
	while(lo<=hi) {
	    ll mid =lo + (hi-lo)/2;
	    // cout<<lo<<" "<<mid<<" "<<hi<<endl;
	    if(a[mid]==n){
	    	ans=mid;
	    	hi=mid-1;
	    }
	    else if(a[mid]<n)
	    	lo=mid+1;
	    else
	    	hi=mid-1;
	// debug(ans);
	}

	return ans;
}

int main()
{
	std::ios::sync_with_stdio(false);
	ll n,q;
	scanf("%lld",&n);
	scanf("%lld",&q);
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%lld",&a[i]);
	}
	while(q--) {
		ll s;
		scanf("%lld",&s);
		ll h =bsearch(a,s,n); 
		printf("%lld\n",h);
	}

	return 0;
}