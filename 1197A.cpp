#include<bits/stdc++.h>
using namespace std;



#define ll long long int

int main()
{

    int q;

    cin >> q;



    for(int i=0; i<q; i++)
    {
        ll n;

        cin >> n;

        ll ar[n];

        for(int j=0; j<n; j++)
        {
            cin >> ar[j];
        }

        sort(ar,ar+n);

        ll fx = ar[n-2]-1;


        cout <<  min((n-2),fx) << endl;
    }



    return 0;

}
