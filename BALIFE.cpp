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

ll loaddis(ll t,vector<ll> v){
	ll sum=0,ans=0,mx=-INF;
	vector<ll> sa;
		for (int i = 0; i < t; ++i)
		{
			sum+=v[i];
			sa.pb(sum);
		}

		if(sum%t!=0)
			return -1;
		else{
			ll each = sum/t;
			for (ll i = 1; i < t; ++i)
			{
				ans=abs(sa[i-1]-(i*each));
				mx=max(ans,mx);
			}
		}
		return mx;
}

int main(){
	ll t;
	while(S(t)){
		if(t==-1)
			break;
		vector<ll> v(t);
		for (ll i = 0; i < t; ++i)
		{
			cin>>v[i];
		}
		cout<<loaddis(t,v)<<endl;

	}	
	return 0;
}