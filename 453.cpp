#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,v1,v2,t,t1,t2;

    cin >> l >> v1 >> v2 >> t;

    if(v1>v2)
    {
        t1 = l/v1;
        cout << t/t1 << endl;
    }
    else
    {
        t2 = l / v2;

        cout << t / t2 << endl;
    }

    return 0;
}
