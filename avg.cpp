#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double



int main()
{

    ll t;

    cin >> t;


    while(t--)
    {

        ll n;

        cin >> n;

        ld a[n+1];


        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }


        for(int i=0; i<n-1; i++)
        {

            ld ans = (a[i]+a[i+1])/2.00;


            if(ans<a[i])
            {
                a[i] = ans;
                continue;
            }
            else
            {
                a[i+1] = ans;

            }

        }

        for(int i=0; i<n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;

    }



    return 0;
}
