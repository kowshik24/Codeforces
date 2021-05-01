#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0;
    double d,f,c,e;
    int a[105],b[105];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[j]=a[i];
        j++;
    }

    sort(a,a+n);
    //cout<<a[0]<<endl;
    //cout<<a[n-1]<<endl;

    for(int i=0; i<n; i++)
    {
         if(b[i]==a[0])
         {
             c=i+1;
           // cout<<c<<endl;
         }
         else if(b[i]==a[n-1])
         {
             d=i+1;
            // cout<<d<<endl;
         }
    }


    if(b[0]==a[n-1]&& b[n-1]==a[0])
    {
        cout<<0<<endl;
    }
    else if(d>c)
    {
        cout<<d-1+n-c-1<<endl;
    }
    else
    {
        cout<<d-1+n-c<<endl;
    }

    return 0;
}
