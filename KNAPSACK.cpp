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

int dp[2005][2005];

int knpsk(int i,int w,vector<pair<int,int> > v,int n,int k){
	if(w>k)
		return -INF;
	if(i>n)
		return 0;
	if(dp[i][w]!=-1)
		return dp[i][w];
	int a = knpsk(i+1,w,v,n,k);
	int b = knpsk(i+1,w+v[i].ff,v,n,k) + v[i].ss;
	dp[i][w]=max(a,b);
	return dp[i][w];
}

int main(){
	
	std::ios::sync_with_stdio(false);
	memset(dp,-1,sizeof(dp));
	int s,n;
	// cin>>s>>n;
	scanf("%d%d",&s,&n);
	vector<pair<int,int> > v(n);
	for (int i = 0; i < n; ++i)
		{
			// cin>>v[i].ff;
			// cin>>v[i].ss;
			scanf("%d%d",&v[i].ff,&v[i].ss);
		}
	int ans = knpsk(0,0,v,n-1,s);
	printf("%d",ans );
	return 0;
}