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

// int dp[][];

int f(int oxy[],int nit[],int wgt[],int t,int a,int toxy,int tnit,int i){
	if(toxy>=t && tnit>=a){
		return 0;
	}

	int p = wgt[i] + f(oxy,nit,wgt,t,a,toxy+oxy[i],tnit+nit[i],i+1);
	int b = f(oxy,nit,wgt,t,a,toxy,tnit,i+1);

	return min(p,b);
}


int main(){
	
	int c;
	cin>>c;
	while(c--){

		int t,a;
		cin>>t>>a;
		int n;
		cin>>n;
		int oxy[n];
		int nit[n];
		int wgt[n];
		for (int i = 0; i < n; ++i)
			cin>>oxy[i]>>nit[i]>>wgt[i];

		// cout<<"hello";
		cout<<f(oxy,nit,wgt,t,a,0,0,0)<<endl;


	}	
	return 0;
}