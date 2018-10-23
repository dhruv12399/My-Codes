#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define F(i,a,b) for(ll i = a; i <= b; i++)
#define RF(i,a,b) for(ll i = a; i >= b; i--)
#define pii pair<int,int>
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
#define S2(x,y) scanf("%d%d",&x,&y)
#define P(x) printf("%lld",x)
#define all(v) v.begin(),v.end()

int dp[505][505];

int party(int i,int j,vector<pii> v,int bgt,int n){
	if(j>bgt)
		return -INF;
	if(i>n)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	int a=party(i+1,j,v,bgt,n);
	int b=party(i+1,j+v[i].ff,v,bgt,n)+v[i].ss;
	return dp[i][j]=max(a,b);
}


int main(){
	int bgt,n;
	while(S2(bgt,n)){
		if(bgt==0 || n==0)
			break;
		memset(dp,-1,sizeof(dp));
		vector<pii> v(n);
		for (int i = 0; i < n; ++i)
		{
			S2(v[i].ff,v[i].ss);
		}
		int ans=party(0,0,v,bgt,n-1);
		// for (int i = 504; i >=0; --i)
		// {
		// 	if(dp[504][i]==ans)
		// 		cout<<i+1<<" "<<ans<<endl;
		// }
		cout<<ans<<endl;
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 51; ++j)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		// v.clear();
	}

	return 0;
}