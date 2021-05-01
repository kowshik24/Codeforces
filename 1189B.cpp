#include<bits/stdc++.h>
using namespace std;



#define ll long long

int main()
{

    ll n;

    cin >> n;


    ll num[n];


    for(int i=0; i<n; i++)
        cin >> num[i];


        sort(num , num + n);


        if(num[n-1]<num[n-3] + num[n-2])
        {
            cout << "YES" << endl;


            cout << num[n-3] << " ";


            if(n>3)
            {

            for(int i=0; i<=n-4; i++)
            {
                cout << num[i] << " ";
            }

            }

            cout << num[n-2] << " " << num[n-1];
        }

        else
        {
            cout << "NO" << endl;
        }

        return 0;

}
