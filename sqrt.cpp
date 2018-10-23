#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl

bool check(int mid,int n){
	if(mid*mid<=n)
		return 1;
	return 0;
}

int binary(int n){
	int lo = 0, hi=1000, ans=0;
	
	while(lo<=hi){
		int mid=(lo+hi)/2;
		if(check(mid,n)){
			ans = mid;
			lo=mid+1;
		}
		else{
			hi=mid-1;
		}
	}
	return ans;
}


int main()
{
	int n;
	cin>>n;
	cout<<binary(n);
	return 0;
}

