#include<bits/stdc++.h>
using namespace std;



/// 26 - 06 - 2019

int main()
{

    long long int a , mod;


    cin >> a;

    for(int i=a; ; i++)
    {

        long long int sum = 0;
        long long int b = i;

        while(b!=0)
        {
            mod = b % 10;

            sum = sum + mod;

            b = b / 10;
        }

        if(sum % 4 ==0)
        {
            cout << i << endl;
            break;
        }
    }



    return 0;
}
