#include<bits/stdc++.h>
using namespace std;


#define ll long long


int main()
{

    int t;


    int a , b , c;

    cin >> t;


    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c;

        ll ans = 0;


        while(1)
        {
            if(b>=1 && c>=2 )
            {
                ans += 3;

               b -=  1 , c -= 2;


                continue;
            }


            if(a>=1 && b>=2 )
            {
                ans += 3;

               a -=1 , b -= 2;

                continue;
            }

            break;


        }


        cout << ans << endl;


    }




    return 0;
}
