#include<bits/stdc++.h>
using namespace std;



#define ll long long


ll solve(ll t1 , ll t2 , ll mid)
{
    return ((t1 * mid) + (t2 * mid ))/(2*mid);
}

int main()
{

    ll t1 , t2 , x1 , x2 , t0;


    cin >> t1 >> t2 >> x1 >> x2 >> t0;

    ll y1 = x1 , y2 = x2;

    while(1)
    {
        ll mid = (y1+y2)/2;

        ll val = solve(t1,t2,mid);

        //cout << val << " " << mid << endl;


        if(val==t0)
        {
            cout << y1 << " " << y2 << "\n";

            return 0;
        }
        else if(val<t0)
        {
            if(t1>t2)
            {
                y2 = mid;
            }
            else
            {
                y1 = mid;

            }
        }
        else
        {
            if(t1>t2)
            {
                y1 = mid;
            }
            else
            {
                y2 = mid;
            }

        }

        cout << y1 << " " << y2 << endl;

    }



}
