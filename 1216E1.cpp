#include<bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    int q;

    cin >> q;


    ll k;



    while(q--)
    {
        cin >> k;

        ll rot1 = (-1 + sqrt(1+(4*2*k)))/2;

        ll rot2 = (-1 - sqrt(1+(4*2*k)))/2;


        if(rot1>=rot2)
        {
            ll n1 = ((rot1) * (rot1+1))/2;

            ll n2 = ((rot1+1) * (rot1+2))/2;



            for(int i=n1+1; i<=n2; i++)
            {
                if(i==k)
                {
                    cout << 1 <<
                }
            }
        }
        else
        {

        }


    }
}
