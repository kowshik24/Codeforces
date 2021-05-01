#include<bits/stdc++.h>
using namespace std;


#define ll long long


ll fact(ll x , ll y)
{

    ll sum = 1 , sum1 = 1;


    for(int i=2; i<=x; i++)
    {
        sum = (sum * i) % 1000000007;
    }

    for(int i=2; i<=y; i++)
    {
        sum1 = (sum1 * i) % 1000000007;
    }

    return (sum+sum1);
}

int main()
{

    ll x , y;


    cin >> x >> y;


    cout << ((x%1000000007) * (y%1000000007)) + 2 << endl;


    return 0;
}
