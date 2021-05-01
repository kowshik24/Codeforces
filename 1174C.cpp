#include<bits/stdc++.h>
using namespace std;



long long prime[1000002];


int main()
{

    long long n , cnt = 0;

    cin >> n;


        for(int i=2; i<=n; i++)
        {
            if(prime[i]==0)
            {
                cnt++;

                prime[i] =cnt ;


                for(int j=i; j<=n ;j+=i)
                {
                    prime[j] = prime[i];

                   // cout << prime[j] << " ";

                }


            }

            cout << prime[i] << " ";

        }

        cout << endl;

       // cout << 2 << endl;







}
