#include<bits/stdc++.h>
using namespace std;


long long int  ar[20];

int main()
{
    long long int  a , b , c;
    int t;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        for(int j=0; j<3; j++)
            cin >> ar[j];

        sort(ar,ar+3);

        if((ar[0]+ar[1] + 1) >= ar[2])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }


    return 0;
}
