#include<bits/stdc++.h>
using namespace std;



#define ll long long

int main()
{


    int t;

    cin >> t;

    for(int i=0; i<t; i++)
    {

        int n;

        cin >> n;


        vector<ll>ar(n);


        for(int j=0; j<n; j++)
            cin >> ar[j];


        sort(ar.begin(), ar.end());



        ll bound = ar[0] * ar[n-1];

        vector<ll>ar1;


        for(int k=2; k * k<= bound ; k++ )
        {
            if( bound % k == 0)
            {

                ar1.push_back(k);

                if( k != bound / k)
                {
                    ar1.push_back(bound/k);

                }

            }
        }


            sort(ar1.begin(), ar1.end());




            if(ar == ar1)
            {

                cout << bound << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }



    return 0;




}
