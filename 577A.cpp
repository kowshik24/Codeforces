#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n , k;

    cin >> n >> k;

    int count = 0;

    for(int i=1; i<=n; i++)
    {
        if((n*i)>=k && k%i==0)
        {
            count++;
        }
    }

    cout << count << endl;


    return 0;
}
