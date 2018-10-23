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

int BIT[100]={0};
int a[100]={0};

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
	int n;
	cin>>n;
	for (int i = 1; i <= n; ++i)
		cin>>a[i];
	for (int i = 1; i <= n; ++i)
		update(i,a[i],n);

	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<query(r)-query(l-1)<<endl;
	}

	return 0;
}