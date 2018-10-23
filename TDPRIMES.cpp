#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl
#define n 100000000
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

int main(){
	
	sieve();
	for (int i = 0; i < primes.size(); i+=100)
	{
		cout<<primes[i]<<endl;
	}
}