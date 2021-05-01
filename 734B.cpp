#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k2,k3,k5,k6,min,min1,sum;

    cin >> k2 >> k3 >> k5 >> k6;

    if(k2<k5)
    {
        if(k2<k6)
        {
            min = k2;
        }
        else
        {
            min = k6;
        }
    }
    else
    {
        if(k5<k6)
        {
            min = k5;
        }
        else
        {
            min = k6;
        }
    }
   // sum = sum+(256*min);

    if((k2-min)<k3)
    {
        min1 = (k2-min);

    }
    else
    {
        min1 = k3;
    }

    cout << (256*min)+(32*min1) << endl;
}
