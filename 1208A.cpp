#include<bits/stdc++.h>
using namespace std;


long long int a ,b;


long long int fib(long long int a, long long int b,long long int n)
{

    if(n==0)
        return a;
    else if(n==1)
        return b;
    else

    return (a|b)&(~a|~b);

}
int main()
{
    long long int  n;

    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> n;

        cout <<fib(a,b,n) << endl;
    }

    return 0;
}
