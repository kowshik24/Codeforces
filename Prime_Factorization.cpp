#include<bits/stdc++.h>
using namespace std;


void prime_factorization(long long n)
{

    while(n%2==0)
    {
        cout << 2 << " ";
        n/=2;
    }

    for(long long i=3; i*i<=(n); i+=2)
    {
        while(n%i==0)
        {
            cout << i << " ";
            n/=i;
        }
    }


    if(n>2)
    {
        cout << n << endl;
    }


}


int main()
{


    long long n;
    cin >> n;


    prime_factorization(n);




    return 0;
}
