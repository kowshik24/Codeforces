#include<bits/stdc++.h>
using namespace std;

long long int ar[100009];

int main()
{
    long long int n , sum = 0;

    cin >> n;


    for(int i=0; i<n; i++)
    {


        cin >> ar[i];

        sum += ar[i];
    }

        sort(ar,ar+n);


        if(sum % 2 == 0 && sum >=(2*ar[n-1]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


        return 0;
}
