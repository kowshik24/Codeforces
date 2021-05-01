#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,n;

    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;

    cin>>n;

    int total_cup = a1+a2+a3;

    int a = total_cup ;

    int total_med = b1+b2+b3;

    int b = total_med ;

    int cup = total_cup / 5;

    int med = total_med / 10;

    if(a%5)
    {
        cup = cup + 1;
    }
    if(b%10)
    {
        med = med + 1;
    }

   /* cout<<cup<<endl;

    cout<<med<<endl;

    int p = n-cup;

    int q = n-med; */

    if(cup + med <= n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
