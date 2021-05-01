#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}


int main()
{

    int n;

    cin >> n;



    int ans = 0;

    for(int i=2; i<=n; i++)
    {
        int count = 0;

        for(int j=2; j<=i; j++)
        {
            if(i%j==0)
            {
                if(isPrime(j))
                {
                    count++;
                }
            }
        }

        if(count==2)
        {

           // cout << i << endl;
            ans++;
        }
    }


    cout << ans << endl;

    return 0;
}
