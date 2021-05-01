#include<bits/stdc++.h>
using namespace std;


#define ll long long



ll find_digit(ll a , ll b)
{
    return ((ll)( b * log10(a) + 1));
}

int main()
{

    /// Find the number of digit at a^b

    /// Formula 1 + b * log10(a)


    ll a , b;


    cin >> a >> b;

    cout << find_digit(a,b) << endl;



    return 0;
}
