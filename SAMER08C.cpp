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
vector<ll> fin;
ll garden(ll index, ll n, vector<ll> arr){
	if(index>n)
		return 0;
	if(dp[index]!=-1)
		return dp[index];
	ll a = garden(index+1,n,arr);
	ll b = garden(index+2,n,arr)+arr[index];
	return dp[index]=max(a,b);
}


int main()
{	
	std::ios::sync_with_stdio(false);
	while(true){
		ll m,n;
		cin>>m>>n;
		if(m==0 || n==0)
			break;
		fin.clear();
		vector< vector<ll> > a(m,vector<ll> (n) );
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>a[i][j];
			}
			memset(dp,-1,sizeof(dp));
			fin.pb(garden(0,n-1,a[i]));
		}
		memset(dp,-1,sizeof(dp));
		cout<<garden(0,m-1,fin)<<endl;
		}
	return 0;
}