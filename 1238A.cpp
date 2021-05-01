#include<bits/stdc++.h>
using namespace std;


#define ll long long


int main()
{
    ll x, y;

    int t;


    cin >> t;



    for(int i=0; i<t; i++)
    {

        cin >> x >> y;



        if(x-y>1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

//        ll sq = sqrt(x) + 1;
//
//
//        bool check = 0;
//        for(int i=2; i<=sq; i++)
//        {
//            if(x%i==y%i)
//            {
//                cout << "YES" << endl;
//                check = 1;
//                break;
//            }
//        }
//
//
//        if(check==0)
//        cout << "NO" << endl;


    }






    return 0;
}
