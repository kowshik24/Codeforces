#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{

    ll n,q;


    cin >> q;
    ll sum = 0;


    for(int i=0; i<q; i++)
    {
        cin >> n;

        sum = __gcd(sum,n);

//        cout << sum << endl;

    }

    ll count = 0;


    for(int i=1; i*1ll*i<=sum; i++)
    {
        if(sum%i==0)
        {
            count++;
            if(i!=sum/i)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}

