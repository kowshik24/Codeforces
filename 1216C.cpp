#include<bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{

    ll x1 ,y1 , x2 , y2 , x3 , y3 , x4 , y4 , x5 , y5 , x6 , y6;


    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    cin >> x5 >> y5 >> x6 >> y6;

    ll x7 = (x4-x1+1) , y7 = y3;

    ll x8 = (x6-x5+1) , y8 = y6;


    ll mid_x1 = (x2+x1)/2 , mid_y1 = y1;

    ll mid_x2 = mid_x1 , mid_y2 = y2;


    if((y8>=mid_y2) && (mid_y1>=y7))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }


}
