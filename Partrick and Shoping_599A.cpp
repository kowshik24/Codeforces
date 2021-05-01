#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int d1,d2,d3;

    cin >> d1 >> d2 >>  d3;

    if(d1+d2<d3)
    {
        cout<< min( (2*d1 + 2* d2) , (d1+d2+d3) ) <<endl;
    }
    else if(d1+d2>d3)
    {
        if(d1>d2)
        {
        cout<< min((2*d3+2*d2) ,(d1+d2+d3)) <<endl;
        }
        else
        {
            cout<< min((2*d3+2*d1) ,(d1+d2+d3)) <<endl;
        }
    }
    else
    {
        cout << d1+ d2+ d3 <<endl;
    }


    return 0;
}
