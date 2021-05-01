#include<bits/stdc++.h>
using namespace std;




long long int gcd(long long int a,long long int b)
{
    if(a%b==0)
        return b;

    return gcd(b,a%b);
}


int main()
{
    long long int a,b;

    cin >> a >> b;



    if(a<b)
    {
        if(b%a==0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (b%a)-gcd(a,b) << endl;
        }
    }
    else
    {
        if(a%b==0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (a%b)-gcd(a,b) << endl;
        }
    }

    return 0;
}



