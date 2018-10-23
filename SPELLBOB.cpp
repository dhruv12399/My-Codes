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

bool f(string a, string b){
	string s[10];
	for (int i = 0; i < 9; ++i)
	{
		s[i] = "";
	}
	s[1] = a;
	s[2] = b;
	// cout<<a[0];
	char a1,a2,a3,b1,b2,b3;
	a1 = char(a[0]);
	a2 = char(a[1]);
	a3 = char(a[2]);
	b1 = char(b[0]);
	b2 = char(b[1]);
	b3 = char(b[2]);

	s[3] = s[3] + a1+a2+b3;
	// debug(s[3]);
	s[4] = s[4] + a1+b2+b3;
	s[5] = s[5] + a1+b2+a3;
	s[6] = s[6] + b1+b2+a3;
	s[7] = s[7] + b1+a2+a3;
	s[8] = s[8] + b1+a2+b3;
	for (int i = 1; i < 9; ++i)
	{
		// debug(s[i]);
		if(s[i]=="bob" || s[i]=="obb" || s[i]=="bbo")
			return true;
	}
	return false;
}

int main(){

	int t;
	cin>>t;
	while(t--){
		// cout<<t;
		string a,b;
		cin>>a>>b;
		bool ans = f(a,b);
		// cout<<f(a,b,0,3)<<" "<<f(a,b,3,0)<<endl;
		if(ans)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;	
	}	
	return 0;
}