#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll t;

    cin >> t;


    while(t--)
    {
        ll n;
        cin  >> n;

        ll a[n];

        for(int i=0; i<n; i++)
            cin >> a[i];

         ll count = 0;

         ll mini = INT_MAX;

            for (int i = n -  1; i >= 0; i--) {

            if (a[i] > mini)
                count++;
            mini = min(mini, a[i]);
        }

        cout << count <<endl;
    }
    return 0;

}
