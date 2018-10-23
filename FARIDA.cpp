#include <bits/stdc++.h>
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
	
ll dp[10005];
ll garden(ll index, ll n, vector<ll> arr){
	if(index>n)
		return 0;
	if(dp[index]!=-1)
		return dp[index];
	ll a = garden(index+1,n,arr);
	ll b = garden(index+2,n,arr)+arr[index];
	// debug(a);
	// debug(b);
	// debug(index);
	// debug(arr[index]);
	return dp[index]=max(a,b);
}


int main()
{
	
	ll t;
	cin>>t;
	ll m=t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		ll x;
		cin>>x;
		std::vector<ll> v(x);
		for (int i = 0; i < x; ++i)
		{
			cin>>v[i];
		}
		cout<<"Case "<<m-t<<": "<<garden(0,x-1,v)<<endl;
	}

	return 0;
}