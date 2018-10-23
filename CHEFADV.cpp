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
		ll n,m,x,y;
		cin>>n>>m>>x>>y;
		n--;
		m--;
		if(n==0 && m==0){
			cout<<"Chefirnemo"<<endl;
			continue;
		}
		// if(n==0 || m==0){
		// 	cout<<"Pofik"<<endl;
		// 	continue;
		// }
		if(n==1 && m==1){
			cout<<"Chefirnemo"<<endl;
			continue;
		}
		// if(x>n || y>m){
		// 	cout<<"Pofik";
		// 	// return 0;
		// }
		if((n%x==0 && m%y==0) || ((n-1)%x==0 && (m-1)%y==0 && n-1>=0 && m-1>=0) )
			cout<<"Chefirnemo"<<endl;
		else
			cout<<"Pofik"<<endl;
	}
	return 0;
}