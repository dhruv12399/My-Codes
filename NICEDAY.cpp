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

int BIT[100000+5];
// int a[100]={0};

void update(int i,int val,int n){
	while(i<=n){
		BIT[i]=min(BIT[i],val);
		i+=(i&(-i));
	}
}

int query(int i){
	int ans=INT_MAX;
	while(i>0){
		ans=min(BIT[i],ans);
		i-=(i&(-i));
	}
	return ans;
}

int main(){
	
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		pair<ll,pii> *a = new pair<ll,pii>[n];
		for (ll i = 0; i < n; ++i)
			cin>>a[i].ff>>a[i].ss.ff>>a[i].ss.ss;

		sort(a,a+n);
		fill(BIT,BIT+n+3,INT_MAX);
		// debug(BIT[2]);
		ll ans=0;
		for (int i = 0; i < n; ++i)
		{
			ll cur = query(a[i].ss.ff);
			if(cur>a[i].ss.ss)
				ans++;
			update(a[i].ss.ff,a[i].ss.ss,n);
		}
		cout<<ans<<endl;

	}

	return 0;
}