#include<bits/stdc++.h>
using namespace std;
int power(long long int x, long long int y, long long int p)
{
    long long int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;  
    }
    return res;
}
int nck(long long int n,long long int k  )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;
 
    long long int result = n;
    for(long long int i = 2; i <= k; ++i ) {
        result =(result*(n-i+1))%1000000007;
        result =(result/i)%1000000007;
    }
    return result;
}
 
int main()
{
    long long int t;
    cin>>t;
    for(long long int j=0;j<t;j++)
    {
        long long int n,kk,prod=1;
        cin>>n>>kk;
        long long int xoxo[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>xoxo[i];
        }
        sort(xoxo,xoxo+n);
        if(n==kk)
        {
            for(long long int h=1;h<n-1;h++)
            {
                prod=(prod*xoxo[h])%1000000007;
            }
            cout<<prod<<endl;
        }
        else
        {
            long long int a,b[n],c[n],po[n];
            a=nck(n-1,kk-1);
            for(long long int i=0;i<n;i++)
            {
                b[i]=nck(n-i-1,kk-1);
                c[i]=nck(i,kk-1);
            }
            for(long long int i=0;i<n;i++)
            {
                po[i]=(a-b[i]-c[i]);
            }
            for(long long int i=0;i<n;i++)
            {
                prod=(prod*power(xoxo[i],po[i],1000000007))%1000000007;
            }
            cout<<prod<<endl;
        }  
    }
    return 0;
}    