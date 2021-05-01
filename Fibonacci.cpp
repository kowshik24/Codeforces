#include<bits/stdc++.h>
using namespace std;


long long int fib(int n)
{
    long long int  a = 0, b = 1, c,sum=0;
    if( n==0)
        return sum=sum+a;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;

        sum = sum +c;
        a = b;
        b = c;
    }
    return sum;
}

int main ()
{
    int n;

    cin >> n;

    cout << fib(n)+1 << endl;

    return 0;
}
