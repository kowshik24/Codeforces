#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100005]={0},b[100005]={0},m,x,sum=0;

    cin >> n;

    for(int i=1; i<=n; i++)
    {
    cin >> b[i];
    }
    for(int i=1; i<=n; i++)
    {
        sum = sum + b[i];
        a[i]=sum;
    }

   // for(int i=0; i<n; i++)
     //   cout << a[i] << " ";


    cin >> m;

    for(int j=1; j<=m; j++)
    {
        cin >> x;


        int low = 1;
        int high = n;


        while(low<=high)
        {
            int mid = (low+high)/2;


            if(a[mid-1]<x && a[mid]>=x)
            {
                cout << mid << endl;
                break;
            }
            if(a[mid]>x)
            {
                high = mid-1;
            }
            if(a[mid]<x)
            {
                low = mid+1;
            }

        }
    }

    return 0;
}
