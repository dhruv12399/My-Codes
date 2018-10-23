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
		int n;
		cin>>n;
		n--;
		ll x = (n/26);
		x = pow(2,x);
		// int b,n,by;
		int q = n%26;
		if(q==0 || q==1)
			cout<<x<<" 0 0"<<endl;
		else if(q>=2 && q<=9)
			cout<<"0 "<<x<<" 0"<<endl;
		else if(q>=10 && q<=25)
			cout<<"0 0 "<<x<<endl;


	}	
	return 0;
}