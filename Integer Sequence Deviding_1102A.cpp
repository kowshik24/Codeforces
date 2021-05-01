#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a , half1 , half2, sum1 , sum2, sum;

    cin >> a;

    if((a*(a+1)/2)%2==0)
        cout << 0 << endl;

    else
        cout << 1 << endl;

    return 0;
}
