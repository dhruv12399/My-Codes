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

ll dp[1005][1005];

int bb(ll i, ll w, ll lim,ll n, vector<ll> a){
	if(w>lim)
		return -INF;
	if(i>n)
		return 0;
	if(dp[i][w]!=-1)
		return dp[i][w];
	ll c = bb(i+1,w,lim,n,a);
	ll b = bb(i+2,w+a[i],lim,n,a)+a[i];
	return dp[i][w] = max(c,b);
}

int main(){
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	int m=t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		ll n,k;
		cin>>n>>k;
		vector<ll> a(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		cout<<"Scenario #"<<m-t<<": "<<bb(0,0,k,n-1,a)<<endl;
	}
	return 0;
}