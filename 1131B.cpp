#include<bits/stdc++.h>
using namespace std;

long long int a[1000002],b[1000002];
int main()
{
    long long int n,sum=0,n1,m;

    cin >> n;

    if(n==1)
    {
        cin >> n1 >> m;

        cout << max(n1,m) << endl;

        return 0;
    }
    else
    {

    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i];

    }

    for(int i=0; i<n; i++ )
    {
        if(a[i]==0 && b[i]==0 && a[i+1]==0 && b[i+1]==0 )
            continue;
        else
        {
         m = max(a[i],b[i]);
        n1 = min(a[i+1],b[i+1]);

        if(m==n1)
            sum=sum+1;
        }
    }


    cout << sum + 1 << endl;
    }

    return 0;

}
