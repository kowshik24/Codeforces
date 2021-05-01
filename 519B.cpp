#include<bits/stdc++.h>
using namespace std;


//long long int mark[100000009];
int main()
{
    long long int n;

    cin >> n;

    long long int fi[n], se[n],tr[n];


    for(int i=0; i<n; i++)
    {

        cin >> fi[i];
    }

    for(int i=0; i<n-1; i++)
    {
        cin >> se[i];

    }

    for(int i=0; i<n-2; i++)
    {
        cin >> tr[i];
    }

    sort(fi,fi+n);
    sort(se,se+n-1);
    sort(tr,tr+n-2);




    for(int i=0; i<n; i++)
    {
        if(fi[i]!=se[i])
        {
            cout << fi[i] << endl;
            break;
        }
    }

    for(int i=0; i<n-1; i++)
    {
        if(se[i]!=tr[i])
        {
            cout << se[i] << endl;
            break;
        }
    }


    return 0;

}
