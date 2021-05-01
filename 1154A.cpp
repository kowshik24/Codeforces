#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[10];

    for(int i=0; i<4; i++)
        cin >> a[i];

    sort(a,a+4);


    long long int max=a[3];

    for(int i=0; i<4; i++)
    {
        if(max==a[i])
            continue;
        else
        {
            cout << abs(a[i]-max) << " ";
        }
    }
}
