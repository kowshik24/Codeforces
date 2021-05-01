#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n , m , k , num1 , num2;

    cin >> n >> m >> k;

    cout << (m+n)/k <<" ";


    if((n/k)+(m/k)==(m+n)/k)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << k - max(n%k,m%k) << endl;
    }

    return 0;
}
