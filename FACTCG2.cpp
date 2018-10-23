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
#define S2(x,y) scanf("%d%d",&x,&y)
#define P(x) printf("%d\n",x)
#define all(v) v.begin(),v.end()


void factorise(ll n){
	vector<ll> v;
	printf("1");
	for(ll i=2;i*i<=n;i++){
		while(n%i==0){
			// v.pb(i);
			printf(" x ");
			printf("%lld",i );	
			n/=i;
		}
	}
	if(n!=1){
		// v.pb(n);
		printf(" x ");
		printf("%lld",n );
	}
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	printf(" x ");
	// 	printf("%lld",v[i]);
	// }
	printf("\n");
}
int main(){
	ll s;
	std::ios::sync_with_stdio(false);
	while(scanf("%lld",&s)!=EOF)
	{
		if(s==0)
			break;
		factorise(s);
	}
	
	return 0;
}