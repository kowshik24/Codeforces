#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int l[105],r[105];
    int k;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> l[i] >> r[i];
    }
    cin >> k;
    int count=0;

    for(int i=0; i<n; i++)
    {
        for(int j=l[i] ; j<=r[i] ; j++)
        {
            if(j==k)
            {
                cout << n-i << endl;
                return 0;
            }
        }
    }
}
