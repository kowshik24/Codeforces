#include<bits/stdc++.h>
using namespace std;


#define ll long long



int main()
{

    ll t;

    cin >> t;


    for(int i=0; i<t; i++)
    {

        ll n;

        cin >> n;

        vector<ll>ar(n+1);

        ll sum = 0;



        for(int j=0; j<n; j++)
        {
            cin >> ar[j];
            if(ar[j]<=2048)
            {
                sum += ar[j];

            }
        }

        if(sum>=2048)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }



    }

}
