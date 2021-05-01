#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin >> n;

    long long int ar[n];


    for(int i=0; i<n; i++)
        cin >> ar[i];

    sort(ar,ar+n);

    if((n-1) % 2)
    {
        cout << ar[(n-1)/2] << endl;
    }
    else
    {
        cout <<  ar[(n-1)/2] << endl;
    }

    return 0;




}
