#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    long long t[n],c[n];

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> t[i] >> c[i];
    }


    int DP[n+1][n+1];

    for(int i=0; i<=n; i++)
    {
        for(int j=0 ; j<=n; j++)
        {
            if(i==0 || j==0)
                DP[i][j] = 0;
            else
            {
                long long in = 0 , ex = 0;


                if()
            }
        }
    }
}
