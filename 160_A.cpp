#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    int a[1001];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }

    int half=sum/2;

    sort(a,a+n);

    int sum1=0;
    int j=n-1;
    int count=0;

    while(1)
    {

        if(sum1>half)
            break;
        else
        {
             sum1=sum1+a[j];
               j--;
             count++;

        }


    }

    cout<<count<<endl;

    return 0;

}
