#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[200005];

    long long int right=1,left=1;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            left=i;

        }
        else
        {
            right=i;
        }
    }

    cout << min(left,right) +1  << endl;
}
