#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    int a[102],b[102];

    cin >> n;

    for(int i=0; i<n; i++)
        cin >> a[i];


    sort(a,a+n);

    int f;
    int j =0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==a[i+1])
        {
            f=0;
         continue;

        }
        else
        {
            f=1;
            b[j]=a[i];
            //cout << b[j] << endl;
            j++;
        }
    }

    if(f==0)
    {
        b[j]=a[n-1];
        //cout << b[j] << endl;
    }

    sort(b,b+j);

    //cout << j << endl;

    if(j>3)
    {
        cout << -1 << endl;
    }
    else if(j==3)
    {
        if((b[2]-b[1])==(b[1]-b[0]))
        {
            cout << b[2]-b[1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else  if(j==2)
    {
        if((b[1]-b[0])%2!=0)
        {
            cout << b[1]-b[0] << endl;
        }
        else
        {
            cout << (b[1]-b[0]) / 2 << endl;
        }
    }
    else if(j==1)
    {
        cout << 0 << endl;
    }

    return 0;

}
