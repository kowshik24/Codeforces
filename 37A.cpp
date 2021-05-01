#include<bits/stdc++.h>
int b[1005];
using namespace std;
int main()
{
    int n,count=0,count1=0;

    int a[1005],c[1005]={0},i;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a[i];

        b[a[i]]++;
    }

    sort(a,a+n);

    int max = a[n-1];

    int j=0;

    for(i=1;i<=max; i++)
    {
        c[j]=b[i];
        j++;
    }
        //cout << b[i] << endl;

   // cout << max << endl;

    sort(c,c+j);


    for(int i=0; i<j; i++)
    {
        //cout << b[i] << endl;

        if(c[i]>0)
        {
            count++;
        }
    }

    cout << c[j-1] << " " << count << endl;

    return 0;
}
