#include<bits/stdc++.h>
using namespace std;

int ar[1000][1000];
int main()
{
    int n;

    cin >> n;



    int cnt = 0;


    for(int i=0; i<n/2; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            ar[i][j] = 4*cnt + 1;
            ar[i][j+n/2] = 4*cnt + 2;
            ar[i+n/2][j] = 4*cnt + 3;

            ar[i+n/2][j+n/2] = 4*cnt;

            cnt++;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << ar[i][j]  << " ";

        }
        cout << "\n";
    }


    return 0;

}
