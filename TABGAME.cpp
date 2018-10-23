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

int dp[1000][1000];

int main(){
	
	int t;
	cin>>t;
	while(t--){
		char m[100000+5], n[100000+5];
		cin>>m;
		cin>>n;
		memset(dp,0,sizeof(dp));
		// cout<<n<<" "<<m<<endl;
		// dp[][m+1] = {0};
		for (int i = 1; i <= strlen(n); ++i)
		{
			dp[0][i]=n[i-1]-48;
			if(dp[0][i]==0)
				dp[1][i]=1;
		}
		for (int i = 1; i <= strlen(m); ++i)
		{
			dp[i][0]=m[i-1]-48;
			if(dp[i][0]==0)
				dp[i][1]=1;
		}
		for (int i = 1; i <= strlen(m); ++i)
		{
			for (int j = 1; j <= strlen(n); ++j)
			{
				if(dp[i][j]==0){
					if(dp[i-1][j]==0 || dp[i][j-1]==0)
						dp[i][j]=1;
					else
						dp[i][j]=0;
				}
			}
		}
		for (int i = 0; i <= strlen(n); ++i)
		{
			for (int j = 0; j <= strlen(m); ++j)
			{
				cout<<dp[j][i]<<" ";
			}
			cout<<endl;
		}
		ll q;
		cin>>q;
		while(q--){
			int x,y;
			cin>>x>>y;
			cout<<dp[y][x];
			// dp[y][x]=q+10;
		}
		cout<<endl;

	}	
	return 0;
}