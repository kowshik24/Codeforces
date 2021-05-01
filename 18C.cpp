#include<bits/stdc++.h>
using namespace std;


int ar[100002];

int main()
{
    int n;

    cin >> n;


    long long int sum = 0;

    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }


    long long int sum2 = sum / 2;


    long long int sum1 =  0;

    int count = 0;


    for(int i=0; i<n; i++)
    {
            sum1 += ar[i];

        if(sum1==(sum-sum2))
        {
            count++;

            sum1 = 0;

        }

    }

    cout << count-1 << endl;
    return 0;



}
