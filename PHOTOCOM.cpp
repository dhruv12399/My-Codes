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

ll gcd(ll a, ll b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}

ll lcm(ll a, ll b){
	return (a*b)/gcd(a,b);
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		ll h1,w1,h2,w2;
		cin>>h1>>w1;
		char p1[h1*w1];
		cin>>p1;
		cin>>h2>>w2;
		char p2[h2*w2];
		cin>>p2;
		// cout<<p1<<endl<<p2<<endl;
		// cout<<lcm(3,8)<<endl;
		ll l1 = lcm(h1,h2);
		ll l2 = lcm(w1,w2);
		char mat[l1][l2];
		ll a1 = l1/h1;
		ll a2 = l1/h2;
		ll b1 = l2/w1;
		ll b2 = l2/w2;
		
		
	}	
	return 0;
}