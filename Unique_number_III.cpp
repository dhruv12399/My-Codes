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


void un3(int *a,int n){
	int b[64] = {0};
	// memset(b,0,sizeof(b));
	for (int i = 0; i < n; ++i)
	{
		// cout<<b[i]<<" ";
		int x = a[i];
		int k=0;
		while(x>0){
			if(x&1)
				b[k]++;
			k++;
			x = (x>>1);
		}
	}
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		// cout<<b[i]<<" ";
		if(b[i]%3==1)
			sum+= 1<<i ;
	}
	cout<<sum<<endl;
}

int main(){
	int n;
	cin>>n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	un3(a,n);
	return 0;
}