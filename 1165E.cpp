#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[200003];
ll b[200003];

int main()
{
    ll n;

    cin >> n;


    for(int i=0; i<n;i++)
    {

        cin >> a[i];

//        a[i] = a[i] % 998244353;
    }

    for(int i=0; i<n; i++)
    {

        cin >> b[i];

//        b[i] = b[i] % 998244353;

    }

    sort(b,b+n);




    ll sum = 0;

    for(int i=0; i<n; i++)
    {

        ll sum1 = 0;

        for(int j=0; j<n; j++)
        {
            sum1 = sum1 + (a[i] * b[j]);

            cout << sum1 << endl;
        }

        sum += sum1;
    }

    cout << sum % 998244353 << endl;





    return 0;
}
