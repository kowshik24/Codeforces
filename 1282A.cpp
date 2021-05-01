#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{

    ll a , b ,  c , r;

    int t;


    cin >> t;


    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c >> r;

        ll left = c-r;

        ll right = r + c;


        ll st = max(left,min(a,b)) ;
        ll ed = min(right,max(a,b));

       ll z = 0;

        cout << abs(a-b) - max(z,ed-st) << endl;
    }



    return 0;
}

