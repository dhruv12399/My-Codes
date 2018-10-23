#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define debug(x) cout << #x << " = " << x << endl

void printKMax(ll arr[], ll n, ll k)
{
    deque<ll>  Q(k);
    ll i;
    for ( i = 0; i < k; ++i)
    {
        while((!Q.empty()) && arr[i]>=arr[Q.back()]) {
            Q.pop_back();
        }
        Q.push_back(i);
    }
    while(i<n){
        cout<<arr[Q.front()]<<" ";

        while((!Q.empty()) && Q.front()<=i-k) {
            Q.pop_front();
        }
        while((!Q.empty()) && arr[i]>=arr[Q.back()]) {
            Q.pop_back();
        }
        Q.push_back(i);
        ++i;
    }
    cout<<arr[Q.front()];
}

int main()
{
    ll n,k;
    cin>>n;
    ll a[n];
    for (ll i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    cin>>k;
    printKMax(a, n, k);
    return 0;
}