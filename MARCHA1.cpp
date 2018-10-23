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


int func(int *a,int i,int m){
	int sum=0;
	int j=0;
	// cout<<endl;
	// debug(i);
	while(i>0){
		if(i&1)
			sum+=a[j];
		i=i>>1;
		j++;
	}
	// debug(sum);
	if(sum==m)
		return 1;
	return 0;
}

void gen(int *a,int n,int m){
	for (int i = 0; i < (1<<n) ; ++i)
	{
		if(func(a,i,m)){
			cout<<"Yes";
			return;
		}
	}
	cout<<"No";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int *a = new int[n];
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		gen(a,n,m);
		cout<<endl;
	}	

	return 0;
}