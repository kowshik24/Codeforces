#include<bits/stdc++.h>
using namespace std;

#define ll long long

int prime[3000000],nPrime;

int mark[10000002],c[10000002];

int main()
{
    long long int  n=10000000;

     int limit = sqrt(n*1.0)+2;

    mark[1]=1;

    for(int i=4; i<=n; i+=2)
        mark[i]=1;


    prime[nPrime++]=2;

    for(int i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime[nPrime++]=i;

            if(i<=limit)
            {
                for(int j=i*i ; j<=n; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }

    int j=0;


    long long int sum = 0;

    for(int i=2; i<=n; i++)
    {
        if(mark[i]==0)
            {
                c[j]=i;
                if(i<2000000)
                    sum += i;
                j++;
            }
    }

    //cout << sum << endl;

    ll n1;

    cin >> n1;

    for(ll i=n1; ; i++)
    {
        if(mark[i]==0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
