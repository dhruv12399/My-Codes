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
	
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		ll v=0;
		int s=n;
		if(n&1)
			s--;
		for (int i = 0; i < s; i+=2)
		{
			if(a[i]==1 && a[i+1]==0){
				if(v>=0)
					v++;
				else
					v--;
			}
			else if(a[i]==0 && a[i+1]==1){
				if(v>=0)
					v--;
				else
					v++;
			}
		}
		if(n&1){
			if(v>=0)
				v+=a[n-1];
			else
				v-=a[n-1];
		}
		// debug(v);
		if(abs(v)>=k)
			cout<<"1"<<endl;
		else
			cout<<"2"<<endl;
	}	
	return 0;
}