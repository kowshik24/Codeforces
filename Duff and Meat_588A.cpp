#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n;

    cin >> n;


    long long int  a[n], p[n];


    for(int i=0; i<n; i++)
    {

        cin >> a[i] >> p[i];

    }

    long long int price = 1000000;

    long long int sum = 0;




    for(int i=0; i<n; i++)
    {
        price = min(price,p[i]);

        sum += a[i] * price;
    }

    cout << sum << endl;


    return 0;


}
