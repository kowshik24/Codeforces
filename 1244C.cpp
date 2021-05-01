#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{

    ll n, p, w, d;



    cin >> n >> p >> w >> d;


    ll x = p/w;

//    cout << x << "\n";

//    ll baki_point = p-(x*w);

//    cout << baki_point << "\n";

    if(p%w)
    {

        ll baki = p-(x*w);


        if(baki<d || baki%d!=0)
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            ll nw = baki/d;


            if((x+nw)==n)
            {
                cout << x << " " << 0 << " " << nw << "\n";
            }

        }
    }
    else
    {
        ll z = n-x;


        if((x+z)==n)
        {
            cout << x << " " << 0 << " "<< z << "\n";
        }
        else
        {
            cout << -1 << endl;
        }
    }


    return 0;
}
