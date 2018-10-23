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

int BIT[1000000]={0};
// int a[100]={0};

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

bool comp(pii a,pii b){		// sorting in dec order
	if(a.ff==b.ff)
		return b.ss<a.ss;
	return b.ff<a.ff;
}

int main(){
	
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	int p=t;
	while(t--){
		ll n,m,k;
		cin>>n>>m>>k;
		pii *a = new pii[k];
		memset(BIT,0,sizeof(BIT));
		for (int i =0 ; i < k; ++i)
			cin>>a[i].ff>>a[i].ss;

		sort(a,a+k,comp);
		// cout<<a[0].ff<<" "<<a[0].ss<<endl;
		// cout<<a[1].ff<<" "<<a[1].ss<<endl;
		// cout<<a[2].ff<<" "<<a[2].ss<<endl;
		// cout<<a[3].ff<<" "<<a[3].ss<<endl;
		ll ans=0;
		for (int i = 0; i < k; ++i)
		{
			ans+=query(a[i].ss-1);
			update(a[i].ss,1,1000000);
		}
		cout<<"Test case "<<p-t<<": "<<ans<<endl;
	}

	return 0;
}