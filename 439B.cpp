#include<bits/stdc++.h>
using namespace std;




#define ll long long


int main()
{

    ll n , m;

    cin >> n >> m;

    ll cap[n];


    for(int i=0; i<n; i++)
        cin >> cap[i];

        sort(cap,cap+n);




        ll sum = 0;

        for(int i=0; i<n; i++)
        {
            sum += (cap[i]*m);

            if(m>1)
            {
                m--;
            }
        }

        cout << sum << endl;



}
