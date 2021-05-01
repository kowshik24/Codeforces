#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double a[100];

    a[0]=ceil(n/1.0);
    a[1]=ceil(n/2.0);
    a[2]=ceil(n/3.0);
    a[3]=ceil(n/4.0);
    a[4]=ceil(n/5.0);

    //cout << a[4] << endl;

    sort(a,a+5);

    cout << a[0] << endl;

    return 0;

}
