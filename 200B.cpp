#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;


    cin >> n;


    long double bot[n];
    long double sum = 0;

    for(int i=0; i<n; i++)
        cin >> bot[i];

    for(int i=0; i<n; i++)
    {
        sum = sum + (bot[i]/100);
    }

//    cout << sum << endl;


    long double res = (sum / n)  * 100;

    cout << setprecision(14) << res << endl;


//    printf("%.12f\n",res);


    return 0;

}
