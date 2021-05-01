#include<bits/stdc++.h>
using namespace std;


bool c[1000002];
int main()
{
    int n;

    cin >> n;

    long double num;



    int mark[n];

    long long int sum = 0;



    for(int i=0; i<n; i++)
    {
        cin >> num;

        mark[i] = floor(num);

        if(num - mark[i]<=0.000000001)
            c[i] = 1;

        sum += mark[i];




    }

    for(int i=0; i<n; i++)
    {
        if(sum < 0  && !c[i]){
            cout << mark[i] + 1  << endl;
            sum ++;
        }
        else
            cout << mark[i] << endl;
    }
    return 0;
}
