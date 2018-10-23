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
		ll n,z1,z2;
		cin>>n>>z1>>z2;
		if(z1>z2) swap(z1,z2);
		int a[n];
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		ll s=0;
		if(n>2)
			cout<<"0"<<endl;
		if(n==1){
			if(s+a[0] == z1 || s+a[0] == z2 || s-a[0] == z1 || s-a[0] == z2)
				cout<<"1"<<endl;
			else if(z1==0 || z2 ==0 || (z1==(-2)*a[0] && z2 == 2*a[0]) || (z2==(-2)*a[0] && z1 == 2*a[0]))
				cout<<"2"<<endl;
			else
				cout<<"0"<<endl;
		}
		if(n==2){
			if(s+a[0] == z1 || s+a[1] == z1 || s+a[0] == z2 || s+a[1] == z2 || s-a[0] == z1 || s-a[1] == z1 || s-a[0] == z2 || s-a[1] == z2)
				cout<<"1"<<endl;
			else if(z1==0 || z2 ==0 || (z1==(-1)*(a[0]+a[1]) && z2 == (a[0]+a[1])) || (z2==(-1)*(a[0]+a[1]) && z1 == (a[0]+a[1])) )
				cout<<"2"<<endl;
			else
				cout<<"0"<<endl;
		}
	}	
	return 0;
}