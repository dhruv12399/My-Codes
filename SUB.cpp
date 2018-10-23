#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl

bool check(ll mid, string s1, string s2) {
	ll i = 0, j = 0;
	ll cnt = 0;
	while (i < s1.size() && j < s2.size()) {

		if (s1[i] == s2[j]) {
			cnt++;
			if (cnt == mid) {
				i++;
				cnt = 0;
			}
		}
		j++;
		//debug(i);
		if (i == s1.size())
			return 1;
	}
	return 0;
}

ll bin(string s1, string s2) {
	ll lo = 0, hi = 1000000000000, ans = 0;
	while (lo <= hi) {
		ll mid = (lo + hi) / 2;
		// cout<<lo<<" "<<mid<<" "<<hi<<endl;
		if (check(mid, s1, s2)) {
			ans = mid;
			lo = mid + 1;
		}
		else {
			hi = mid - 1;
		}
	}
	return ans;
}


int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s1;
		string s2;
		cin >> s1;
		cin>>s2;
		// cout<<"hello"<<endl;
		cout << bin(s1, s2)<<endl;
	}
	return 0;
}