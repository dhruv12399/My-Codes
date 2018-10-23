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

int zeros(ll n){
	ll f5=0,f2=0;
	
	while(n>0){
		ll temp=n;
		while(temp%5==0){
			f5++;
			temp/=5;
		}
		while(temp%2==0){
			f2++;
			temp/=2;
		}
	// debug(f2);
	// debug(f5);
	// debug(n);
	n--;
	}

	return min(f2,f5);
}

int main(){
	
	ll n;
	cin>>n;
	cout<<zeros(n);
	return 0;
}