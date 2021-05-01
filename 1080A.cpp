#include<bits/stdc++.h>
using namespace std;


#define ll long long


int main()
{

    ll n ,k;

    cin >> n >> k;


    ll red = (n*2) , green = (n*5) , blue = (n*8);

//    cout << red << endl;
//
//
//    cout << ceil(1.0*red/k) << endl;
//    cout << ceil(green/k) << endl;
//    cout << ceil(blue/k) << endl;


    cout << (ll)(ceil(1.0*red/k) + ceil(1.0*green/k) + ceil(1.0*blue/k)) << endl;


    return 0;

}
