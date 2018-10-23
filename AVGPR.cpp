#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define F(i,a,b) for(ll i = a; i <= b; i++)
#define RF(i,a,b) for(ll i = a; i >= b; i--)
#define pii pair<ll,ll>
#define PI 3.14159265358979323846264338327950288
#define ll long long
#define ff first
#define ss second
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define debug(x) cout << #x << " = " << x << endl
#define INF 1000000009
#define mod 1000000007
#define S(x) scanf("%d",&x)
#define S2(x,y) scanf("%lld%lld",&x,&y)
#define P(x) printf("%d",x)
#define all(v) v.begin(),v.end()

ll bsearch(int a[], ll n,ll size){
	ll lo=0, hi=size, ans=-1;
	while(lo<=hi) {
	    ll mid =lo + (hi-lo)/2;
	    // cout<<lo<<" "<<mid<<" "<<hi<<endl;
	    if(a[mid]==n){
	    	ans=mid;
	    	return ans;
	    	// hi=mid-1;
	    }
	    else if(a[mid]<n)
	    	lo=mid+1;
	    else
	    	hi=mid-1;
	// debug(ans);
	}

	return ans;
}

int main(){

	std::ios::sync_with_stdio(false);
	
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int a[n];
		int b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			b[i]=a[i];
		}

		sort(b,b+n);
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<a[i]<<" ";
		// }
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<b[i]<<" ";
		// }
		int ans=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				if((a[i]+a[j])%2==0){
					if(bsearch(b,(a[i]+a[j])/2,n)!=-1)
						ans++; 
				}
			}
		}

		cout<<ans<<endl;
		// printf("\n");
	}	
	return 0;
}