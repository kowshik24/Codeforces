
#include<bits/stdc++.h>
using namespace std;




#define mt              make_tuple
#define ld              long double
#define ll              long long





int main()
{

    ll n, k;


    ll t;

    cin >> t;

    while(t--)
    {


        cin >> n >> k;


        ll m[10005]={0};

        m[k] = 1;


        for(int i=1; i<=(n/2); i++)
        {
            ll kos = k-i;

            if(kos>0 && m[kos]==0 && m[i]==0 && i!=kos)
            {
                m[i] = 1;
            }
        }
        int cnt = 0;


        for(int i=1; i<=n; i++)
        {
            if(m[i]==0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;

        for(int i=1; i<=n; i++)
        {
            if(m[i]==0)
            {
                cout << i << " ";
            }
        }

        cout << endl;
    }






    return 0;
}
