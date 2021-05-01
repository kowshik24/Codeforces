#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int a[100005],d[100005];
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> d[i];
    }
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(d[i]+d[i+1]==0)
        {
            count++;
        }
    }

    if(count>0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
