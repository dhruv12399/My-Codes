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

ll two[50];

void pre(){
	two[0]=1;
	for (int i = 1; i < 50; ++i)
	{
		two[i] = 2*two[i-1];
	}
	return;
}

ll f(ll n){
	if(n==1)
		return 2;
	ll t = n;
	ll aage,peeche,diff,p;
	for (int i = 0; i < 50; ++i)
	{
		if(two[i]>t){
			p=i-1;
			aage=two[i]-t;
			peeche=t-two[i-1];
			break;
		}
	}
	for (int i = 0; i < 40; ++i)
	{
		if(two[i]>peeche){
			
		}
	}
	
}



int main(){
	
	ll t;
	cin>>t;
	pre();
	// for (int i = 0; i < 20; ++i)
	// 	cout<<two[i]<<" ";
	while(t--){
		ll n;
		cin>>n;
		
		cout<<f(n)<<endl;
		// debug(r);
		// cout<<r;
	}	
	return 0;
}