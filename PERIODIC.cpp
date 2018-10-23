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
	
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n+5];
		map<ll, ll> m;
		ll max = -INF;
		ll known = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(a[i]!=-1)
				known++;
			if(a[i]>max)
				max=a[i];
			if(m[a[i]]==0)

		}
	}	
	return 0;
}