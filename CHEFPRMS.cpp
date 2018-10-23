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

bool s[205];
vector<ll> primes;
map<ll, bool> semiprimes;

void sieve(){

	for (int i = 2; i < 201; ++i)
	{
		s[i]=1;
	}
	for (int i = 4; i < 201; i+=2)
	{
		s[i]=0;
	}
	for (ll i = 3; i*i <= 201; i+=2)
	{
		if(s[i]){
			for(ll j=i*i;j<201;j+=2*i)
				s[j]=0;
		}
	}
	for (ll i = 2; i < 201; ++i)
	{
		if (s[i])
			primes.push_back(i);
	}
	for(int i=0;i<primes.size();++i){
		for (int j = 0; j < primes.size(); ++j)
		{
			if(primes[i]!=primes[j])
				semiprimes[primes[i]*primes[j]]=1;
		}
	}
}

int main(){
	
	sieve();
	int t;
	cin>>t;
	// for (int i = 0; i < 200; ++i)
	// {
	// 	cout<<i<<" "<<semiprimes[i]<<endl;
	// }
	while(t--){
		int n;
		cin>>n;
		for(map<ll,bool>::iterator it = semiprimes.begin();it!=semiprimes.end();it++){
			if(it->second==1){
				int x = n-(it->first);
				if(semiprimes[x]==1){
					cout<<"YES"<<endl;
					goto flag;
				}
			}
		}
		cout<<"NO"<<endl;
		flag:
		;
	}	
	return 0;
}