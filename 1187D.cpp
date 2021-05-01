#include<bits/stdc++.h>
using namespace std;


#define ll long long

    priority_queue<ll>q;
    priority_queue<ll>q1;

int main()
{
    ll test, n ;





    cin >> test;


    for(int i=0; i<test; i++)
    {
        cin >> n;


        for(int j=0; j<n; j++)
        {

            ll num;

            cin >> num;

            q.push(num);

        }

        for(int k=0; k<n; k++ )
        {
            ll num2;

            cin >> num2;

            q1.push(num2);

        }

        if(q==q1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
