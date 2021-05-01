#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,a, k, b;


    int test;

    cin >> test ;



    while(test--)
    {
        cin >> k >> n >> a >> b;

        k -= n*a;

        if(k>0)
        {
            cout << n << endl;
        }
        else
        {
            k = -k;

            k++;

            long long int dif = a - b;


           long long  int m = (k+dif-1)/dif;

            if(m>n)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << n - m << endl;
            }
        }
    }

    return 0;
}
