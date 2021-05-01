#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n , d;

    cin >> n >> d;


    int song[n];



    long long int sum = 0;


    for(int i=0; i<n; i++)
    {
        cin >> song[i];

        sum += song[i];
    }

    if(((n-1)*10+sum)>d)
    {
        cout << -1 << endl;
    }
    else
    {
        int gap = (n-1) * 10 / 5;

        int rem = d-(sum + (n-1)*10);


        cout << gap + (rem/5) << endl;


    }



    return 0;



}
