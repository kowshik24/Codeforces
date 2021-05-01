#include<bits/stdc++.h>
using namespace std;



#define ll long long



int main()
{

    ll s , a , b ,c ;


    int t;

    cin >> t;

    while(t--)
    {


    cin >> s >> a >> b >> c;

   ll bar = floor(s/c);

   ll x = floor(bar/a);

   ll addi = x*b;

   cout << bar + addi << endl;




//    cout << (ans + (ans/a) + s-ans) << endl;

    }





}
