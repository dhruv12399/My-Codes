#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl
#define n 1000
bool s[n];
vector<ll> primes;

void sieve(){

	for (int i = 2; i < n; ++i)
	{
		s[i]=1;
	}
	for (int i = 4; i < n; i+=2)
	{
		s[i]=0;
	}
	for (ll i = 3; i*i <= n; i+=2)
	{
		if(s[i]){
			for(ll j=i*i;j<n;j+=2*i)
				s[j]=0;
		}
	}
	for (ll i = 2; i < n; ++i)
	{
		if (s[i])
			primes.push_back(i);
	}
}
void segsieve(ll l,ll r){
	
	bool isprime[r-l+1];
	for (int i = 0; i < r-l+1; ++i)
	{
		isprime[i]=1;
	}

	while(primes[i]<=sqrt(r) && i<r){
		ll i = ceil(l/primes[])
	}
}

int main()
{
	sieve();
	int t;
	cin>>t;
	while(t--){
		ll l,r;
		cin>>l>>r;
		segsieve(l,r);
	}	
	return 0;
}