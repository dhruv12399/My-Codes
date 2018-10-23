#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl
#define n 10000000
ll sp[n] = {0};
vector<ll> primes;

void sieve(){
	for ( ll i = 2; i <=n-1; i+=2)
	{
		sp[i]=2;
	}
	for (ll i = 3; i <= sqrt(n);i+=2){
		if(sp[i]==0){

			for( ll j=1;i*j<=n-1;j+=2){
				if(sp[i*j]==0)
					sp[i*j]=i;
			}
		}
	}
	for (ll i = 0; i < n; i++)
	{
		if(sp[i]==0)
			sp[i]=i;
	}
	// for (int i = 0; i < 50; ++i)
	// {
	// 	cout<<sp[i]<<" ";
	// }

}

int main(){
	
	std::ios::sync_with_stdio(false);
	sieve();
	ll s;
	while(scanf("%lld",&s)!=EOF)
	{
		if(s==0)
			break;
		ll temp = s;
		printf("1");
		while(temp>1){
			printf(" x ");
			printf("%ld",sp[temp]);
			temp=temp/sp[temp];
		}
		printf("\n");
		
	}
	return 0;
}