#include<bits/stdc++.h>
using namespace std;

long long int a[10004];

int main()
{

    long long int n;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    int count = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i]>a[i+1])
        {
            count++;
        }
    }

    if(count==0 || count ==1)
    {
        cout << "yes" << endl;

        cout << a[0] << " " << a[n-1] << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;

}
