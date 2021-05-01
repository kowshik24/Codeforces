#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int n,q;

    cin >> q;



    int f = 1;

    while(q--)
    {
        cin >> n;
        if(f)
        {
            cout << n << endl;
            f = 0;
        }
        cout << n%2 << endl;

    }

    return 0;
}
