#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,n1,n2,sum1=0,sum2=0;
    cin>>a;

    if(a%2==0)
    {
        n1=a/2;

        sum1=n1*(n1+1);

        sum2=pow(n1,2);

        cout<<sum1-sum2<<endl;
    }
    else
    {
        n1=a/2;
        sum1=n1*(n1+1);

        n2=(a/2)+1;

        sum2=pow(n2,2);

        cout<<sum1-sum2<<endl;
    }

    return 0;
}
