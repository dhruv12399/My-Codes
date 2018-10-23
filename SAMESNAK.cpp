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
	ll t;
	cin>>t;
	while(t--){
		ll x1,x2,x3,x4,y1,y2,y3,y4;
		cin>>x1>>y1>>x2>>y2;
		cin>>x3>>y3>>x4>>y4;
		bool ans = false;
		if((x1==x3 && y1==y3)||(x2==x3 && y2==y3)||(x1==x4 && y1==y4)||(x2==x4 && y2==y4))
			ans=true;
		else if((y1==y2&&y2==y3&&y3==y4) && ((x3>=x1 && x3<=x2)||(x4>=x1 && x4<=x2)))
			ans=true;
		else if((x1==x2&&x2==x3&&x3==x4) && ((y3>=y1 && y3<=y2)||(y4>=y1 && y4<=y2)))
			ans=true;
		if(ans)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}	
	return 0;
}