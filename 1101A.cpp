#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q , l, r ,d;

    cin >> q;

    for(int i=0; i<q; i++)
    {
        cin >> l >> r >> d;

        if(d<l)
        {
            cout << d << endl;
        }
        else
        {
           /* if(r==d)
            cout << d+r << endl;
            else if(r==l)
                cout << r+l << endl;
            else if(l==d)
                cout << d+l << endl;
            else
                cout << l+r << endl;
                */
                int mod = r % d;

                cout << (d-mod)+r << endl;
        }

    }

    return 0;
}
