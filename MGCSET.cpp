#include<bits/stdc++.h>
using namespace std;
int countSub(long long int arr[],long long int n)
{
    long long int count[10] = {0};
    for (long long int i=0; i<n; i++)
    {
        for (long long int j=arr[i]-1; j>=0; j--)
            count[arr[i]] += count[j];
        count[arr[i]]++;
    }
    long long int result = 0;
    for (long long int i=0; i<10; i++)
        result += count[i];

    return result;
}
int main()
{
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++)
    {
        long long int n,m,countt=0;
        cin>>n>>m;
        long long int xoxo[n];
        for(long long int j=0;j<n;j++)
        {
            cin>>xoxo[j];
        }
        for(long long int j=0;j<n;j++)
        {
            if(xoxo[j]%m==0)
            {
                countt++;
            }
        }
        if(countt==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
        long long int yo[countt],k=0;
        for(long long int j=0;j<n;j++)
        {
            if(xoxo[j]%m==0)
            {
                yo[k]=xoxo[j];
                k++;
            }
        }
        cout << countSub(yo,countt)<<endl;
        }
    }
    return 0;
}