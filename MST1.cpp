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

int dp[200000000];

ll mst1(ll x){
	if(dp[x]!=-1 && dp[x]!=0)
		return dp[x];
	if(x==1)
		return 0;
	ll a = 1+ mst1(x-1);
	ll b = INF; ll c = INF;
	if(x%2==0)
		b=1+mst1(x/2);
	if(x%3==0)
		c=1+mst1(x/3);

	return dp[x]=min(a, min(b,c));
}

int main(){
	int n;
	cin>>n;
	// cout<<"hello";
	int p=n;
	// cout<<p;
	while(n--){
		ll x;
		cin>>x;
		// memset(dp,-1,sizeof(dp));		
		cout<<"Case "<<p-n<<": "<< mst1(x)<<endl;
	}	
	return 0;
}