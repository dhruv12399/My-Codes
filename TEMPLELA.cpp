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

bool f(int x){
	bool ans=true;
	if(x%2==0){
		ans=false;
		goto flag;
	}
	for(int i=1;i<=x/2+1;++i){
		int q;
		cin>>q;
		if(q!=i)
			ans=false;
	}
	for (int i = x/2; i >0 ; --i)
	{
		int q;
		cin>>q;
		if(q!=i)
			ans= false;
	}
	goto flag2;
	flag:
	for (int i = 0; i < x; ++i)
	{
		int q;
		cin>>q;
	}
	flag2:
	return ans;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;

		if(f(x))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}	
	return 0;
}