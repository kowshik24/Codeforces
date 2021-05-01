#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k,sum=0,a[100005],count=0;
    cin >> n >> m >> k;

    for(int i=1; i<=n; i++)
        cin >> a[i];

    while(1)
    {
        if(count==0)
        {
        sum = sum + (a[k]-a[1]+1);
        count++;
        }
        if(count==k)
        {
            cout << sum << endl;
            break;
        }
        else
        {
            if((n-k)==(k-count))
            {
                cout << sum+(a[n]-a[k+1]+1) << endl;
                break;
            }
            else
            {
                sum++;
                count++;

            }
        }
    }
}
