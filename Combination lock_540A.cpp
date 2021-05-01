#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000],b[10000];

    int n,sum=0;

    cin>>n;

    scanf("%s",&a);
    scanf("%s",&b);


    for(int k=0; k<n; k++)
    {
        a[k]=a[k]+'0';
        b[k]=b[k]+'0';

        sum=sum+min(abs(a[k]-b[k]),10-abs(a[k]-b[k]));
    }

    cout<<sum<<endl;


    return 0;
}
