#include<bits/stdc++.h>
using namespace std;
long long int a[1000005];
int main()
{

    int n,sum=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    int high=a[n-1];


    for(int i=0; i<n; i++)

    {
        sum=sum+abs(high-a[i]);
    }


    cout<< sum <<endl;

    return 0;
}
