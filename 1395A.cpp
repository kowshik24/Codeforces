

/** Seek God..Trust God..Praise God..**/

#include<bits/stdc++.h>
using namespace std;

#define mt              make_tuple
#define ld              long double
#define ll              long long

bool berkor(ll r , ll g , ll b , ll w)
{


    ll ans = r % 2;

    ll ans1 = g % 2;

    ll ans2 = b % 2;

    ll ans3 = w % 2;



    if((ans+ans1+ans2+ans3)>1)
    {
        return false;
    }
    else
        return true;
}


int main()
{

    int t;

    cin >> t;


    while(t--)
    {

        ll r , g , b , w;



        cin >> r;

        cin >> g;

        cin >> b;

        cin >> w;



        if(berkor(r,g,b,w))
        {
            cout << "Yes" << endl;
        }

        else if(r>0 && g>0 && b>0 && berkor(r-1,g-1,b-1,w+1))
        {
            cout << "Yes" << endl;

        }
        else
        {
            cout << "No" << endl;

        }
    }




    return 0;
}
