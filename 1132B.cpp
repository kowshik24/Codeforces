#include<bits/stdc++.h>
using namespace std;
long long int a[1000005];
int main()
{

    long long int n,m,mi;
    long long int sum=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum=sum+a[i];
    }

    sort(a,a+n);
    //for(int i=0; i<n; i++)
       // cout << a[i] << endl;


    cin >> m;

    for(int j=0; j<m; j++)
    {
        cin >> mi;

        cout << sum-a[n-mi] << endl;

    }

}
