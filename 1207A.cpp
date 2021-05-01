#include<bits/stdc++.h>
using namespace std;



#define ll long long


int main()
{
    ll t,b,p,f;

    cin >> t;


    for(int i=0; i<t; i++)
    {
        ll h,c;


        cin >> b >> p >> f;


        cin >> h >> c;


        ll ans = min(b/2,p/1);

        ll baki_bon = b-(ans*2);

        ll baki_patt = p-(ans);

        ll ans1 = min(baki_bon/2,f/1);


        ll fin = (ans*h) + (ans1*c);



        ll ans2 = min(b/2,f/1);


        ll baki_bon1 = b-(ans2*2);

        ll baki_f = f-ans2;


        ll ans3 = min(baki_bon1/2,p/1);


        ll fin2 = (ans2*c) + (ans3*h);

        cout << max(fin,fin2) << endl;





    }



    return 0;
}
