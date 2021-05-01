#include<bits/stdc++.h>
using namespace std;


int main()
{

    long long int n, m;

    cin >> n >> m;


    long long int num1[n], num2[m];

    for(int i=0; i<n; i++)
        cin >> num1[i];

    for(int j=0; j<m; j++)
        cin >> num2[j];



        long long int ans = 10000000203;
        for(int i=0 ; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(num1[i]==num2[j])
                {
                    ans = min(ans,num1[i]);
                }
                else
                {
                    ans = min(ans , num1[i] * 10 + num2[j]);

                    ans = min(ans , num2[j] * 10 + num1[i]);
                }
            }
        }

        cout << ans << endl;

    return 0;
}
