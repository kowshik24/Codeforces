#include<bits/stdc++.h>
using namespace std;

//
//int subtract(int n  , int m)
//{
//    if(m % n == 0)
//        return m / n;
//}

int main()
{
    int n , m;

    cin >> n >> m;


    if(m % n == 0)
    {
        cout << 1 << endl;
    }
    else if( n % m == 0)
    {
        cout << n - m << endl;
    }
    else
    {

        int count = 0;

        int des = m;


        while(n != des)
        {

            n = n - 1;
            count++;

            if(m % n ==0)
            {
                cout << count + 1;
                return 0;
            }

        }
    }
}
