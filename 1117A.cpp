#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100005],sum=0,c[100005];
    cin >> n;
    if(n==1)
    {
        cin >> a[0];
        cout << 1 << endl;
        return 0;
    }
    else if(n==2)
    {
        cin >>a[0];
        cin >> a[1];
        if(a[0]==a[1])
        {
            cout << 2 << endl;
            return 0;
        }
        else
        {
            cout << 1 << endl;
            return 0;

        }
    }
    else{
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        c[i]=a[i];
    }

    sort(a,a+n);

    long long int maximum = a[n-1];
    int count =0,j=0;
    int b[10003];

    for(int i=0; i<n; i++)
    {
        if(c[i]==maximum)
        {
            count++;
           //cout << count << endl;
        }
        else
        {
            b[j]=count;
            j++;
            count=0;
        }
    }
    b[j]=count;
    //cout << b[j] << endl;

    sort(b,b+j+1);

    cout << b[j] << endl;
    }

    return 0;
}
