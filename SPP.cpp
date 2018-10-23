#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl
#define mod 1000000000




vector< vector<ll> > multiply(vector< vector<ll> > a, vector< vector<ll> > b , int k){
	std::vector<vector<ll> > c(k,vector<ll>(k,0));
	for (int i = 0; i < k; ++i){
		for(int j=0;j<k;++j){
			for(int l=0;l<k;l++){
				c[i][j]=(c[i][j]+(a[i][l]*b[l][j])%mod)%mod;
			}
		}
	}
	return c;
}

vector< vector<ll> > power(vector<vector<ll> > a, int n,int k){

	vector< vector<ll> > ans(k,vector<ll>(k,0));
	for(int i=0;i<k;i++)
        ans[i][i]=1;
	while(n>0){
		if(n&1)
			ans = multiply(ans,a,k);
		a=multiply(a,a,k);
		n/=2;
	}
	return ans;
}

vector <ll> build_base_matrix(int ar[],int k)
{
	vector <ll> base(k);
	for(int i=0;i<k;++i){
		base[i]=ar[k-i-1];
	}
	return base;
}

vector < vector<ll> > build_transformation_matrix(int c[],int k)
{
	vector < vector<ll> >m(k,vector<ll>(k,0));
	for (int i = 0; i < k; ++i)
	{
		m[i][0]=c[i];
	}
	for (int i = 0; i < k-1; ++i)
	{
			m[i][i+1]=1;
	}
	return m;
}
ll final(int k, int b[], int c[], int n){
	if(n<=k)
            return b[n-1]
        else{
            std::vector<ll> base(k);
            base = build_base_matrix(b,k);
            std::vector<vector<ll> > tm = build_transformation_matrix(c,k);
            tm=power(tm,n-k,k);
            int ans=0;
            for (int i = 0; i < k; ++i)
            {
                ans=(ans+(base[i]%mod)*(tm[i][0])%mod)%mod;
                ans%=mod;
            }
            return ans;
        }
}


int main(){

	int t;
	cin>>t;

	while(t--)
	{
		int k;
		cin>>k;
		int b[k],c[k];
		for (int i = 0; i < k; ++i)
		{
			cin>>b[i];
		}
		for (int i = 0; i < k; ++i)
		{
			cin>>c[i];
		}
		int m,n,p;
		cin>>m>>n>>p;
		for(int )
		
	}
	return 0;
}
