#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;

    cin >> t;


    while(t--)
    {




        string bin;

        long long int len, k;

        cin >> len >> k;


        cin >> bin;



        string nw(len,'1');




        long long int pos  = 0;

        for(int i=0; i<len; i++)
        {
            if(bin[i]=='0')
            {
                int a = min(i+0ll-pos,k);

                nw[i-a] = '0';

                k -= a;
                pos++;
            }
        }


        cout << nw << endl;


    }
}
