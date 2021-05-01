#include<bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{

    int n ,q;

    cin >> q;

    while(q--)
    {
        cin >> n;


        ll sum = 0;

        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a ;

            sum += a;
        }

        cout <<(long long int) ceil(sum*1.0/n) << endl;

    }

    return 0;

}
