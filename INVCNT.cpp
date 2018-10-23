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

int BIT[10000005]={0};


void update(int i,int val,int n){
	while(i<=n){
		BIT[i]+=val;
		i+=(i&(-i));
	}
}

int query(int i){
	int sum=0;
	while(i>0){
		sum+=BIT[i];
		i-=(i&(-i));
	}
	return sum;
}

int main(){
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll *a = new ll[n];
		for (ll i = 0; i < n; ++i)
			cin>>a[i];

		memset(BIT,0,sizeof(BIT));
	
		ll ans=0;
		for (ll i = n-1; i >=0 ; --i)
		{
			ans+=query(a[i]-1);
			update(a[i],1,10000000);
		}
		cout<<ans<<endl;

	}
	return 0;
}