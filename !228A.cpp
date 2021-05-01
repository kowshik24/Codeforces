#include<bits/stdc++.h>
using namespace std;


#define ll long long


bool check(ll cnt[])
{
    for(int i=0; i<10; i++)
    {

//        cout << cnt[i] << endl;

        if(cnt[i]>1)
            return false;

    }

    return true;
}

int main()
{
    ll r , l;
    cin >> r >> l;





    for(int i=r; i<=l; i++)
    {

        ll num = i;


        ll cnt[15] = {0};

        while(num!=0)
        {
            ll rem = num % 10;

            cnt[rem]++;
            num = num / 10;

        }

        if(check(cnt))
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;


    return 0;
}
