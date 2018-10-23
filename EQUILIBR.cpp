#include<bits/stdc++.h>
using namespace std;
long long int power2(long long int k,long long int m)
{
    long long int ret = 1;
    long long int a = 2;
    while (k > 0) {
        if (k & 1) ret = (ret * a) % m;
        a = (a * a) % m;
        k >>= 1;
    }
    return ret;
}

long long int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

long long int modInverse(int a, int m)
{
    int x, y;
    int g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // m is added to handle negative x
        long long int res = (x%m + m) % m;
        return res;
    }
}
// int modInverse(long long int a,long long int m)
// {
//     a = a%m;
//     for (long long int x=1; x<m; x++)
//        if ((a*x) % m == 1)
//           return x;
// }
int main()
{
    long long int n,d,p,q;
    cin>>n>>d;
    q=power2((n-1),1000000007);
    p=q-n;
    cout<<(p*modInverse(q,1000000007))%1000000007;
    return 0;
}