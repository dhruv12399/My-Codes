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
#define S(x) scanf("%lld",&x)
#define S2(x,y) scanf("%lld%lld",&x,&y)
#define P(x) printf("%lld",x)
#define all(v) v.begin(),v.end()

int main(){
	
	ll n,m;
	cin>>n>>m;
	ll a[n][m];
	for (ll i = 0; i < n; ++i)
	{
		char str[202];
		cin>>str;
		for (ll j = 0; j < m; ++j)
		{
			a[i][j] = str[j]-48;
		}
	}

	// for (ll i = 0; i < n; ++i)
	// {
	// 	for (ll j = 0; j < m; ++j)
	// 	{
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// cout<<"**********************************************************************\n";

	ll dp0[n][m], dp1[n][m];
	
	for (ll i = 0; i < n; ++i)
	{
		bool st = i%2;
		ll flips=0;
		for (ll j = 0; j < m; ++j)
		{
			if(a[i][j]!=st)
				flips++;
			dp0[i][j] = flips;
			st = !st;
		}
	}

	for (ll i = 0; i < n; ++i)
	{
		bool st = !(i%2);
		ll flips=0;
		for (ll j = 0; j < m; ++j)
		{
			if(a[i][j]!=st)
				flips++;
			dp1[i][j] = flips;
			st = !st;
		}
	}

	for (ll i = 0; i < n; ++i)
	{
		for (ll j = 0; j < m; ++j)
		{
			cout<<dp0[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"**********************************************************************\n";

	for (ll i = 0; i < n; ++i)
	{
		for (ll j = 0; j < m; ++j)
		{
			cout<<dp1[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"**********************************************************************\n";


	ll final[202];
	for (ll i = 0; i < 201; ++i)
		final[i] = LLONG_MAX;

	final[0] = 0;

	for (ll i = 1; i < min(n,m); ++i)
	{
		ll interval = i+1;
		ll totalflips = INF;
		ll x=0,span=0;
		// debug(interval);
		// cout<<endl<<endl;
		for (ll j = 0; j < n-i; ++j)
		{
			span=0; x=0;
			for (ll k = 0; k < m; ++k)
			{
				x = x + dp0[k][j+i];
				if(j>0){
					// cout<<x<<" "<<dp0[k][j-1]<<endl;
					x = x-dp0[k][j-1];
				}
				// if(span<interval){
				span++;
				// debug(span);
				// debug(x);
				// }
				if(span>interval){
					// cout<<"span>interval "<<x<<" "<<dp0[k-interval][j+i]<<endl;
					x = x - dp0[k-interval][j+i];
					if(j>0)
						x = x+dp0[k-interval][j-1];
					span--;
				}
				// debug(span);
				// debug(x);
				if(span==interval){
					totalflips = min(x,totalflips);
				}
				// debug(totalflips);
			}
			// cout<<endl;
		}
		final[i]=totalflips;
	}

	for (ll i = 1; i < min(n,m); ++i)
	{
		ll interval = i+1;
		ll totalflips = INF;
		ll x=0,span=0;
		// debug(interval);
		// cout<<endl<<endl;
		for (ll j = 0; j < n-i; ++j)
		{
			span=0; x=0;
			for (ll k = 0; k < m; ++k)
			{
				x = x + dp1[k][j+i];
				if(j>0){
					// cout<<x<<" "<<dp1[k][j-1]<<endl;
					x = x-dp1[k][j-1];
				}
				// if(span<interval){
				span++;
				// debug(span);
				// debug(x);
				// }
				if(span>interval){
					// cout<<"span>interval "<<x<<" "<<dp1[k-interval][j+i]<<endl;
					x = x - dp1[k-interval][j+i];
					if(j>0)
						x = x+dp1[k-interval][j-1];
					span--;
				}
				// debug(span);
				// debug(x);
				if(span==interval){
					totalflips = min(x,totalflips);
				}
				// debug(totalflips);
			}
			// cout<<endl;
		}
		final[i]=min(final[i],totalflips);
	}
	cout<<endl;
	for (ll i = 0; i < 10; ++i)
	{
		cout<<final[i]<<" ";
	}
	ll q;
	cin>>q;
	while(q--){
		ll k;
		cin>>k;
		for (ll i = 0; i < 201; ++i)
		{
			if(final[i]>k){
				cout<<i<<endl;
				break;
			}
		}
	}

	return 0;
}