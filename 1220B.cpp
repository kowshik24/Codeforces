#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin >> n;

   long long  int ar[n][n];


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> ar[i][j];
        }
    }




    cout << (long long int )(sqrt(ar[0][1])) << " ";

    for(int i=1; i<n; i++)
        cout << (long long int)(sqrt(ar[i][0])) << " ";

}
