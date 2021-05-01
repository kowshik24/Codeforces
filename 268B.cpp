#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int total = 0;

    for(int i=1; i<=n-1; i++)
    {
        total = total +(n-i)*i;
    }

    cout << total + n << endl;

    return 0;
}
