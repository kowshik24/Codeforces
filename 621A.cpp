#include<bits/stdc++.h>

using namespace std;
long long int a[1000005];
long long int odd[100005];

int main()
{
    long long int n,sum=0;
    int k=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2==1)
        {
            odd[k]=a[i];
            k++;
        }
        sum=sum+a[i];

        /*int count =0;
        long long int value = sum;

        while(value!=0)
        {
            value=value/10;
            count++;
        }
        if(count>9)
        {
            break;
        } */
    }

    sort(odd,odd+k);

   // for(int i=0; i<k; i++)
       // cout << odd[i] << endl;

   // cout << sum << endl;

    if(sum%2==0)
    {
        cout << sum << endl;
    }
    else
    {

    int j=0;

    while(1)
    {
        if(sum%2!=0)
        {
            sum=sum-odd[j];
            j++;
        }
        else if(sum%2==0)
        {
            cout << sum << endl;
            break;

        }

    }
    }




    return 0;
}
