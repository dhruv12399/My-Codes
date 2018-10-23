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

bool isvalid(ll a1,ll a2,ll a3,ll b1,ll b2,ll b3){
	// bool ans=false;
	if(a1>b1){
		if(a2>=b2 && a3>=b3)
			return true;
	}
	else if(a1<b1){
		if(a2<=b2 && a3<=b3)
			return true;
	}
	else if(a1==b1){
		if(a2>b2){
			if(a3>=b3)
				return true;
		}
		else if(a2<b2){
			if(a3<=b3)
				return true;
		}
		else if(a2==b2){
			if(a3!=b3)
				return true;
		}
	}
	return false;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		ll a1,a2,a3,b1,b2,b3,c1,c2,c3;
		cin>>a1>>a2>>a3;
		cin>>b1>>b2>>b3;
		cin>>c1>>c2>>c3;
		if(isvalid(a1,a2,a3,b1,b2,b3) && isvalid(b1,b2,b3,c1,c2,c3) && isvalid(a1,a2,a3,c1,c2,c3))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}	
	return 0;
}