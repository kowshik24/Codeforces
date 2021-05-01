#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;

    cin >> n;



    long long int money[n];


    for(int i=0; i<n; i++)
        cin >> money[i];


    int flag = 0;


    long long int sum = 0;

    for(int i=0; i<n; i++)
    {
        if(money[i]==1)
        {
            cout << -1 << endl;
            return 0;
        }
    }


    if(flag == 0)
    {
        cout << 1 << endl;
    }
    return 0;
}
