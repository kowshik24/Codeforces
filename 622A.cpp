#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long int n;


    cin >> n;

    long long int sqrt1 = (-1+sqrt(1+(4*n*2)))/2;

    long long int sqrt2 = (-1-sqrt(1+(4*n*2)))/2;


    if((n-(sqrt1 * (sqrt1+1)/2))==0)
    {
        cout << sqrt1 << endl;
    }
    else
    {

        cout << n-(sqrt1 * (sqrt1+1)/2) << endl;
    }


    return 0;
}
