#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++)
    {
        string xoxo;
        cin>>xoxo;
        long long int n=xoxo.length(),k=n*26,sumn=0,sum=0,min=1000000;
        string a[k];
        for(long long int y=0;y<n;y++)
        {
            for(long long int d=y+1;d<n;d++)
            {
                if(xoxo[y]<xoxo[d])
                    sumn++;
            }
        }
        if(sumn==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            string a=xoxo;
            char c,cc;
            for(long long int j=0;j<n;j++)
            {
                c='a';
                cc=a[j];
                for(int y=0;y<26;y++)
                {
                    xoxo=a;
                    xoxo[j]=c;
                    sum=0;
                    for(long long int s=0;s<n-1;s++)
                    {
                        for(long long int d=s+1;d<n;d++)
                        {
                            if(xoxo[s]<xoxo[d])
                            sum++;
                        }
                    }
                    sum=sum+abs((c-'0')-(cc-'0'));
                    if(sum<min)
                    min=sum;
                    c++;
                }
            }
            cout<<min<<endl;
        }
    }
    return 0;
}
