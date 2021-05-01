#include<bits/stdc++.h>
using namespace std;
long long int a[10000001];
int main()
{
    long long int n,k,m;


    cin >> n >> k >> m;

    for(int i=0; i<n; i++)
        cin >> a[i];

    sort(a,a+n);

    long long int max = a[n-1];


    double count = 0;

    for(int i=0; i<n; i++)
    {
        if(max==a[i])
            count++;
    }

     double f= count*(max+k)/count;

    printf("%.20lf\n",f);

    return 0;
}
