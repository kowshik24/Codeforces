#include<bits/stdc++.h>
using namespace std;



#define ll long long




int main()
{
    int q;

    cin >> q;


    for(int i=0; i<q; i++)
    {

        ll n;

        cin >> n;


        while (true)
        {
            bool ok = true;
            int cur = n;
            while (cur > 0)
            {
                if (ok && cur % 3 == 2)
                    ok = false;
                cur /= 3;
            }
            if (ok)
                break;
            ++n;
        }

        cout << n << "\n";


    }
}
