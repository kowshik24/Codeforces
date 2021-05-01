#include<bits/stdc++.h>
using namespace std;


#define ll long long


int main()
{
    int q;

    cin >> q;


    while(q--)
    {

        ll a, b, n, s;

        cin >> a >> b >> n >> s;



        if(b>=s || (a*n)==s)
        {
            cout << "YES"<<endl;
            continue;
        }




          ll n1 = min(s/n,a);


        if (n1<=a)
        {
            ll money = n1*n;

            if((money+b)>=s)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }

        else
        {
            cout << "NO\n";
        }
    }



    return 0;
}
