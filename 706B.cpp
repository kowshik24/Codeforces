#include<bits/stdc++.h>
using namespace std;

int main()
{


    long long int n, q;


    vector<long long int>shop;

    vector<long long int>coin;



    cin >> n ;


    for(int i=0; i<n; i++)
    {

        long long int  a;

        cin  >> a;

        shop.push_back(a);

    }


        sort(shop.begin(),shop.end());




    cin >> q;




    for(int j=0; j<q; j++)
    {

        long long int b;

        cin >> b;



//        bool mark = binary_search(shop.begin(),shop.end(),b);






            cout <<  upper_bound(shop.begin(),shop.end(),b)-shop.begin()<< endl;



    }

    return 0;













}
