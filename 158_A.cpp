#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000];
    int n,k,count=0;

    cin>>n>>k;

    for(int i=0; i<n ; i++)
        cin>>a[i];

        //cout<<a[k-1]<<endl;

    for(int j=0; j<n ;j++)
    {


        if(a[j]>=a[k-1] && a[j]>0)
        {
           // cout<<a[j]<<endl;
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
