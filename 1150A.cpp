#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r;
    cin >> n >> m >> r;

    int buy1[n],sell1[m];

    for(int i=0; i<n; i++)
        cin >> buy1[i];

    for(int i=0; i<m; i++)
        cin >> sell1[i];


    sort(buy1,buy1+n);
    sort(sell1,sell1+m);

    int mini_buy = buy1[0];
    int max_buy = r/buy1[0];

    int max_sell = sell1[m-1];

    ////sadasdasd adsadsad

    if((mini_buy*max_buy)>(max_sell*max_buy))
    {
        cout << r << endl;
    }
    else
    {
        cout << r + abs((max_sell*max_buy)-(mini_buy*max_buy)) << endl;
    }

    return 0;
}
